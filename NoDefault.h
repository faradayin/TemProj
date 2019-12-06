//
// Created by Feng on 2019/12/6.
//

#ifndef TEMPROJ_NODEFAULT_H
#define TEMPROJ_NODEFAULT_H
//p263 lx7.43
class NoDefault
{
public:
    // 没有默认构造函数
    NoDefault(int var)
    {}

};

class C
{
public:
    C():c_element(0)// define the constructor of C
    {}

private:
    NoDefault c_element;

};

#endif //TEMPROJ_NODEFAULT_H
