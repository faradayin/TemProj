//
// Created by Feng on 2019/12/12.
//
#include "example.h"
#include <iostream>
constexpr double Example::rate;
std::vector<double> Example::vec(Example::vecSize);

int main()
{
    Example ex;
    for(auto x:Example::vec)
        std::cout<<x<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}