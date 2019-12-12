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

//定义C的默认构造函数
class C
{
public:
    C(): c_element(0)// 需要调用NoDefault的构造函数，要保证所调用的构造函数存在
    {}

private:
    NoDefault c_element;

};

#endif //TEMPROJ_NODEFAULT_H
