//
// Created by Feng on 2019/12/12.
//
#include "Account.h"
int main()
{
    double r;
    r = Account::rate();

    Account ac1;;
    Account *ac2 = &ac1;
    r = ac1.rate();
    r = ac2->rate();

}
