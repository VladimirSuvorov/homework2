#pragma once

#include <functional>
#include <type_traits>
//A thing, kinda a not fully featured concepts emulation...
//see template defs of filter## functions
#define REQUIRES(...) typename=std::enable_if_t<__VA_ARGS__>

template<typename Container>
using value_type_of = typename Container::value_type;



template<typename T>
struct has_greater_predicate{
    static constexpr bool value = 
    (!std::is_same<std::false_type, decltype(has(std::declval<T>()))>::value);
private:
    static std::false_type has(...);  
    template<typename U>
    static decltype(std::declval<std::greater<U>>()) has(const U&);
};
template<typename T>
constexpr bool has_greater_predicate_v = has_greater_predicate<T>::value;


template<typename T>
struct has_left_shift_output{
    static constexpr bool value = 
    (!std::is_same<std::false_type, decltype(has(std::declval<T>()))>::value);
private:
    static std::false_type has(...);  
    template<typename U>
    static decltype(std::declval<std::ostream>()<<std::declval<U>()) has(const U&);
};
template<typename T>
constexpr bool has_left_shift_output_v = has_left_shift_output<T>::value;