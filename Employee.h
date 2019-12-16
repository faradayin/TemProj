//
// Created by Feng on 2019/12/14.
//

#ifndef TEMPROJ_EMPLOYEE_H
#define TEMPROJ_EMPLOYEE_H
//lx13.18
#include <string>
#include <iostream>
class Employee
{
public:
    Employee(): name_("Your Wife"), id_(base++) {std::cout<<"Here is "<<name_ << " serving you."<<std::endl;}
    Employee(std::string name): name_(name), id_(base++) {std::cout<<"Here is "<<name_ << " serving you."<<std::endl;}
    //lx13.19:应该阻止拷贝
    Employee(const Employee&) = delete;
    Employee& operator=(const Employee&) = delete;
private:
    std::string name_;
    int id_;
    static int base;
};
int Employee::base = 0;
#endif //TEMPROJ_EMPLOYEE_H
