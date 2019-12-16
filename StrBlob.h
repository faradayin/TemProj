//
// Created by Feng on 2019/12/15.
//

#ifndef TEMPROJ_STRBLOB_H
#define TEMPROJ_STRBLOB_H
//p405,定义一个管理string 的类
//动态内存中用vector管理string
//StrBlob中用shared_ptr管理动态内存中的vector
#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include <stdexcept>

using std::vector; using std::string;

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;
    friend class StrBlobPtr;

    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlob();
    StrBlob(std::initializer_list<string> il);

    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string &t) {data->push_back(t)};
    void pop_back();
    string& front();
    string& back();

private:
    void check(size_type i, const std::string &msg) const;//如果索引i超出范围，抛出异常
    std::shared_ptr<std::vector<std::string>> data;

};
StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(std::initializer_list<string> il): data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
    if(i >= data->size())
        throw out_of_range(msg);
}

string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string StrBlob::back()
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

//StrBlobPtr类提供对StrBlob类的索引
class StrBlobPtr
{
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}

    string& deref() const
    {
        auto p = check(curr, "dereference past end");//p是智能指针
        return (*p)[curr];
    }

    StrBlobPtr& incr()
    {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    //如果指针管理的对象存在，且索引i正确，返回管理对象的shared_ptr智能指针
    std::shared_ptr<vector<string>> check(size_t i, const string &msg) const
    {
        auto ret = wptr.lock();
        if(!ret) throw std::runtime_error("unbounded StrBlobPtr");
        if(i >= ret->size()) throw std::out_of_range(msg);
        return ret;
    }

    std::weak_ptr<vector<string>> wptr;
    size_t curr;
};

#endif //TEMPROJ_STRBLOB_H
