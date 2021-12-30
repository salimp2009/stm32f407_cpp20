//
// Created by salim on 29/12/2021.
//

#include "mainLoop.h"
#include <cstdio>

// this is a function declared in C file and used in C++ main
extern "C" int UserLoop(void);

// this is a function defined in C++ main and used in C file
extern "C" void printTest(int var)
{
    printf("test print val: %i", var);
}

template<typename T>
inline constexpr void print(T a)
{
    std::printf("%i \n", a);
}

int main()
{
    UserLoop();
    std::printf("hello ");
    constexpr auto var=20;
    print(var);


    return 0;
}