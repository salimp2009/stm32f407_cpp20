//
// Created by salim on 01/01/2022.
//

#ifndef STM32_TEST2_MTTEST_HPP
#define STM32_TEST2_MTTEST_HPP

#include <cstdio>
template<typename  T>
auto printValue(T var)
{
    std::printf("%i", var);
}

template<typename T>
inline constexpr void print(T a)
{
    std::printf("%i \n", a);
}


#endif //STM32_TEST2_MTTEST_HPP
