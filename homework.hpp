
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
using boost::asio::ip::make_address_v4;
using ip_pool_t = std::vector<bai::address_v4>;

#include "utils.hpp"

//reads an ip_v4 addresses to ip_pool as their 
ip_pool_t read_ip4_addresses(std::istream& in=std::cin){
    using namespace std;     
    ip_pool_t ip_pool;
    for(string ip_string; getline(in, ip_string);) 
        ip_pool.emplace_back(make_address_v4(ip_string));
    return ip_pool;
}



//Applies any STL-compatible container, 
// with value_type having greater comparsion operator>
template<typename Container,
REQUIRES(has_greater_predicate_v<value_type_of<Container>>)
        >
void reverse_lexicographically_sort(Container& c){
    std::sort(c.begin(), c.end(), std::greater<value_type_of<Container>>);    
}

//Any filter## function:
//1) applies any STL-compatible container, with boost::asio::ip::address_v4 as value_type
//2) returns a copy of an input container, filled with filtered IPs
template<typename Container, 
REQUIRES(
    std::is_same_v<
    value_type_of<Container>, 
    bai::address_v4>)
        >
Container filter(Container&& c, uint8_t first_byte){
    Container r;
    std::remove_copy_if(c.begin(),c.end(),r.begin(),[first_byte](auto &&v){
        return (v.to_bytes()[0]!=first_byte);
    });
    return r;
}
template<typename Container, 
REQUIRES(
    std::is_same_v<
    value_type_of<Container>, 
    bai::address_v4>)
        >
Container filter(Container&& c, uint8_t first_byte, uint8_t second_byte){
    Container r;
    std::remove_copy_if(c.begin(),c.end(),r.begin(),[first_byte, second_byte](auto &&v){
        auto ip_bytes = v.to_bytes();
        return ((ip_bytes[0]!=first_byte)||(ip_bytes[1]!=second_byte));
    });
    return r;    
}
template<typename Container, 
REQUIRES(
    std::is_same_v<
    value_type_of<Container>, 
    bai::address_v4>)
        >
Container filter_any(Container&& c, uint8_t any_byte){
    Container r;
    std::remove_copy_if(c.begin(),c.end(),r.begin(),[any_byte](auto &&v){
        auto ip_bytes = v.to_bytes();
        for(auto byte_index=0; byte_index<ip_bytes.size(); ++byte_index)
            if(ip_bytes[byte_index]==any_byte)return false;
        return true;
    });
    return r;    
}

//Applies any STL-compatible container,
// with value_type having stream output operator<< overload 
template<typename Container,
REQUIRES(has_left_shift_output_v<value_type_of<Container>>)
        >
void output(Container&& c){
    std::for_each(c.begin(),c.end(),[](auto &&v){ std::cout<<v<<std::endl; });
}
