
#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <functional>
//This task is definitely can be simplified with an ip-address datatype.
//And I'am too lazy to implement such datatype myself, espicially cos I know about following header
// and dislike to reinvent square wheels, except in educational purposes.
#include <boost/asio/ip/address_v4.hpp> 
namespace bai = boost::asio::ip;
using ip_pool_t = std::vector<bai::address_v4>;

#include "utils.hpp"

//reads an ip_v4 addresses to ip_pool as their 
ip_pool_t read_ip4_addresses(std::istream& in=std::cin){
    using namespace std;     
    ip_pool_t ip_pool;
    for(string ip_string; getline(in, ip_string);) 
        ip_pool.emplace_back(bai::address_v4::from_string(ip_string));
    return ip_pool;
}



//Applies any STL-compatible container, 
// with value_type having greater comparsion operator>
template<typename Container>
void reverse_lexicographically_sort(WithValueSupportingGreatherPredicate<Container>& c){
    std::sort(std::begin(c), std::end(c), std::greater<value_type_of<Container>>());    
}

//Any filter## function:
//1) applies any STL-compatible container, with boost::asio::ip::address_v4 as a value_type
//2) returns a copy of an input container, filled with filtered IPs
namespace{
    template<typename Container, typename UnaryPredicate>
    Container filter_implementation(const Container& c, UnaryPredicate unary_predicate){
        Container r;//NOTE: unary_predicate is inverted in the lambda, cos we need to invert the condition we're looking for due to use of remove_copy_if's result. 
        std::remove_copy_if(std::cbegin(c), std::cend(c), std::begin(r), [unary_predicate](auto&& v){
            return (!unary_predicate(std::forward<decltype(v)>(v)));
        });
        return r;
    }
}

template<typename Container>
Container filter(const WithValueOfType<Container,bai::address_v4>& c, uint8_t first_byte){
    return filter_implementation(c, [first_byte](auto &&v){
        return (v.to_bytes()[0]==first_byte);
    });
}
template<typename Container>
Container filter(const WithValueOfType<Container,bai::address_v4>& c, uint8_t first_byte, uint8_t second_byte){
    return filter_implementation(c, [first_byte, second_byte](auto &&v){
        auto ip_bytes = v.to_bytes();
        return ((ip_bytes[0]==first_byte)&&(ip_bytes[1]==second_byte));
    });
}
template<typename Container>
Container filter_any(const WithValueOfType<Container,bai::address_v4>& c, uint8_t any_byte){
    return filter_implementation(c, [any_byte](auto &&v){
        auto ip_bytes = v.to_bytes();
        return (std::cend(ip_bytes)!=std::find(std::cbegin(ip_bytes), std::cend(ip_bytes), any_byte));
    });
}

//Applies any STL-compatible container,
// with value_type having stream output operator<< overload 
template<typename Container>
void output(WithValueHavingLeftShiftOutput<Container>&& c, std::ostream& out=std::cout){
    std::for_each(std::cbegin(c), std::cend(c), [&out](auto &&v){ out<<v<<std::endl; });
}
