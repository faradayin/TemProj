//
// Created by Feng on 2019/12/14.
//
#include "EX13_13.h"
#include <vector>
void f(const X &rx, X x)//X(const X&)
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);//X(const X&)
    vec.push_back(x);//X(const X&)
}//~X() ~X() ~X()

int main()
{
    X *px = new X;//X()
    f(*px, *px);//X(const X&)
    delete px;//~X()

    return 0;
}
