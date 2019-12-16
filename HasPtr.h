//
// Created by Feng on 2019/12/13.
//

#ifndef TEMPROJ_HASPTR_H
#define TEMPROJ_HASPTR_H
//拷贝构造函数：类的一个构造函数第一个参数是该类型的(const)引用，其余参数都有默认值，该构造函数就是一个拷贝构造函数
class HasPtr
{//value-like的HasPtr类
public:
    //构造函数
    HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) {}
    //lx13.5，编写一个拷贝构造函数
    HasPtr(const HasPtr& hp): ps(new std::string(*hp.ps)), i(hp.i) {}
    //lx13.8，编写拷贝赋值运算符
    HasPtr& operator=(const HasPtr& hp)
    {
        if(this != &hp)
        {
            delete ps;//释放原来的内存
            ps = new std::string(*hp.ps);
            i = hp.i;
            return *this;
        }
    }
    //lx13.11,编写析构函数
    ~HasPtr()
    {
        delete ps;
    }

    //lx13.30,编写swap函数
    friend void swap(HasPtr&, HasPtr&);
    //lx13.31，编写<运算符
    friend bool operator<(const HasPtr&, const HasPtr&);
private:
    std::string *ps;
    int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

inline bool operator<(const HasPtr &lhs, HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}

#endif //TEMPROJ_HASPTR_H
