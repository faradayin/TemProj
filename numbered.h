//
// Created by Feng on 2019/12/14.
//

#ifndef TEMPROJ_NUMBERED_H
#define TEMPROJ_NUMBERED_H
//lx13.7
#include <iostream>
class numbered
{
public:
    numbered()
    {
        mysn = base++;
    }
    numbered(const numbered& n)
    {
        mysn = base++;
    }

    int mysn;

private:

    static int base;
};

int numbered::base = 0;

void f(const numbered& n)
{
    std::cout<< n.mysn << std::endl;
}

#endif //TEMPROJ_NUMBERED_H
