//
// Created by Feng on 2019/12/14.
//

#ifndef TEMPROJ_HASPTR2_H
#define TEMPROJ_HASPTR2_H
//p456,使用引用计数，编写pointer-like的HasPtr类
class HasPtr
{
public:
    //构造函数分配一个内存用于计数
    HasPtr(const std::string &s = new string()): ps(s), i(0), use(new std::size_t()) {}
    //带引用计数的拷贝构造函数
    HasPtr(const HasPtr &p): ps(p.ps), i(p.i), use(p.use) {++*(use);}
    //拷贝赋值运算符
    HasPtr& operator=(const HasPtr&);
    //析构函数
    ~HasPtr();

    friend void swap(HasPtr&, HasPtr&);

private:
    std::string *ps;
    int i;
    std::size_t *use;
};
HasPtr::~HasPtr()
{
    --*use;
    if(*use == 0)
    {
        delete ps;
        delete use;
    }
}
HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    // 1 保证自赋值的正确性
    // 2 析构 + 拷贝
    ++*rhs.use;
    if(--*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}
//p458，编写swap友元函数
inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);//交换指针
    swap(lhs.i, rhs.i);
}

//p459，使用swap编写的赋值运算符
HasPtr& HasPtr::operator=(HasPtr rhs)
{
    swap(*this, rhs);
    return *this;
}
#endif //TEMPROJ_HASPTR2_H
