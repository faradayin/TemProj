//
// Created by Feng on 2019/12/12.
//

#ifndef TEMPROJ_ACCOUNT_H
#define TEMPROJ_ACCOUNT_H

#include <string>

class Account
{
public:
    void calculate() {amount += amount *interestRate;}
    static double rate() {return interestRate;}
    static void rate(double);

private:
    std::string owner;
    double amount;
    //声明静态数据成员
    static double interestRate;
    static double initRate();

    static constexpr int period = 30;
    double daily_tb1[period];
};
//类外定义静态成员函数
void Account::rate(double newRate)
{
    interestRate = newRate;
}
//必须在类外定义和初始化静态数据成员
double Account::interestRate = initRate();
//可以为静态数据成员提供const整数类型的类内初始值
//如果在类的内部提供了一个初始值，则成员的定义不能再指定一个初始值了
constexpr int Account::period;
#endif //TEMPROJ_ACCOUNT_H
