#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
//This task is definitely can be simplified with an ip-address datatype.
//And I'am too lazy to implement such datatype myself, espicially cos I know about following header
// and dislike to reinvent square wheels, except in educational purposes.
#include <boost/asio/ip/address_v4.hpp> 
namespace bai = boost::asio::ip;
using ip_pool_t = std::vector<bai::address_v4>;

#include "utils.hpp"

//reads an ip_v4 addresses from an std::istream to ip_pool as their string representation;
ip_pool_t read_ip4_addresses(std::istream& in=std::cin){
    using namespace std;     
    ip_pool_t ip_pool;
    for(string ip_string; getline(in, ip_string);) 
        ip_pool.emplace_back(move(bai::address_v4::from_string(ip_string.substr(0, ip_string.find_first_of(" \t\n")))));
    return ip_pool;
}



//Applies any STL-compatible container, with a value_type having greater comparsion operator>
template<typename Container>
void reverse_lexicographically_sort(WithValueSupportingGreatherPredicate<Container>& ip_addresses_container){
    using namespace std;
    sort(begin(ip_addresses_container), end(ip_addresses_container), greater<value_type_of<Container>>());    
}

namespace{//filter function family implementation detatils
    template<typename Container, typename UnaryPredicate>
    Container filter_implementation(const Container& ip_addresses_container, UnaryPredicate unary_predicate){
        using namespace std;
        Container result_ip_addresses_container; 
        remove_copy_if(cbegin(ip_addresses_container), cend(ip_addresses_container), back_inserter(result_ip_addresses_container), 
        [&unary_predicate](auto&& ip_address){
            return (!unary_predicate(forward<remove_reference_t<decltype(ip_address)>>(ip_address)));
        });
        return result_ip_addresses_container;
    }
}//detatils

//Any filter## function:
//1) applies any STL-compatible container, with boost::asio::ip::address_v4 as a value_type
//2) returns a copy of an input container, filled with filtered IPs
template<typename Container>
Container filter(const WithValueOfType<Container,bai::address_v4>& ip_addresses_container, uint8_t first_byte){
    return filter_implementation(ip_addresses_container, [first_byte](auto &&ip_address){
        return (ip_address.to_bytes()[0]==first_byte);
    });
}
template<typename Container>
Container filter(const WithValueOfType<Container,bai::address_v4>& ip_addresses_container, uint8_t first_byte, uint8_t second_byte){
    return filter_implementation(ip_addresses_container, [first_byte, second_byte](auto &&ip_address){
        auto ip_bytes = ip_address.to_bytes();
        return ((ip_bytes[0]==first_byte)&&(ip_bytes[1]==second_byte));
    });
}
template<typename Container>
Container filter_any(const WithValueOfType<Container,bai::address_v4>& ip_addresses_container, uint8_t any_byte){
    return filter_implementation(ip_addresses_container, [any_byte](auto &&ip_address){        
        using namespace std;
        auto ip_bytes = ip_address.to_bytes();
        return (find(cbegin(ip_bytes), cend(ip_bytes), any_byte)!=cend(ip_bytes));
    });
}

//Applies any STL-compatible container, with a value_type having a stream output operator<< overload 
template<typename Container>
void output(WithValueHavingLeftShiftOutput<Container>&& ip_addresses_container, std::ostream& out=std::cout){
    using namespace std;
    for_each(cbegin(ip_addresses_container), cend(ip_addresses_container), [&out](auto &&v){ out<<v<<std::endl; });
}
