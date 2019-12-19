//
// Created by Feng on 2019/12/19.
//
#include "StrBlob.h"
void StrBlob::check(size_type i, const string &msg) const
{
    if(i >= data->size())
        throw std::out_of_range(msg);
}

string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}

//lx12.20，使用StrBlob读取文本文件
#include <iostream>
#include <fstream>
#include "StrBlob.h"
int main()
{
    std::ifstream ifs("../jieqi.txt");
    StrBlob j_blob;
    for(std::string str; std::getline(ifs, str); j_blob.push_back(str))
    {
        std::cout<<str<<std::endl;
    }
    std::cout<<"reading via StrBlotPtr:\n";
    for(StrBlobPtr pbeg(j_blob.begin()), pend(j_blob.end()); pbeg != pend; pbeg.incr())
    {
        std::cout<<pbeg.deref()<< std::endl;
    }

    return 0;
}