//
// Created by Feng on 2019/12/14.
//

#ifndef TEMPROJ_EX13_13_H
#define TEMPROJ_EX13_13_H
//lx13.13
#include <iostream>
struct X
{
    //constructor
    X()
    {
        std::cout<< "X()"<< std::endl;
    }
    //copy constructor
    X(const X&)
    {
        std::cout<< "X(const X&)"<< std::endl;
    }
    //copy assignment operator
    X& operator=(const X& rhs)
    {
        std::cout<< "X& operator=(const X& rhs)"<< std::endl;
        return *this;
    }
    ~X()
    {
        std::cout<< "~X()"<< std::endl;
    }
};
#endif //TEMPROJ_EX13_13_H
