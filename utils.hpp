#pragma once

#include <functional>
#include <type_traits>

template<typename Container>
using value_type_of = typename Container::value_type;



template<typename T>
struct has_greater_predicate{
private:
    static std::false_type has(...);  
    template<typename U>
    static decltype(std::declval<std::greater<U>>()) has(const U&);
public:
    static constexpr bool value = 
    (!std::is_same<std::false_type, decltype(has(std::declval<T>()))>::value);
};
template<typename T>
constexpr bool has_greater_predicate_v = has_greater_predicate<T>::value;

template <typename Container,
    typename = std::enable_if_t<has_greater_predicate_v<value_type_of<Container>>>>
using WithValueSupportingGreatherPredicate = Container;

template<typename T>
struct has_left_shift_output{
private:
    static std::false_type has(...);  
    template<typename U>
    static decltype(std::declval<std::ostream>()<<std::declval<U>()) has(const U&);
public:
    static constexpr bool value = 
    (!std::is_same<std::false_type, decltype(has(std::declval<T>()))>::value);
};
template<typename T>
constexpr bool has_left_shift_output_v = has_left_shift_output<T>::value;

template <typename Container,
    typename = std::enable_if_t<has_left_shift_output_v<value_type_of<Container>>>>
using WithValueHavingLeftShiftOutput = Container;


template <typename Container,typename T, 
    typename = std::enable_if_t<
        std::is_same_v<
            value_type_of<Container>, 
            T>
       >
>
using WithValueOfType = Container;


