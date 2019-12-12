//
// Created by Feng on 2019/12/11.
//
//每天至少写代码2h
//规划好时间吧
#ifndef TEMPROJ_SALES_DATA_H
#define TEMPROJ_SALES_DATA_H

//p237
struct Sales_data
{
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(const std::istream &);

    //p260
    //使用默认实参的构造函数
    Sales_data(std::string s = ""): bookNo(s) {}
    Sales_data(std::string s, unsigned cnt, double rev): bookNo(s), units_sold(n), revenue(rev*cnt) {}
    Sales_data(std::istream &is) {read(is, *this);}
    //lx7.38，默认使用cin作为实参的构造函数
    Sales_data(std::istream &is = std::cin) {read(is, *this);}
    //lx7.39，不要同时定义多个使用默认实参的构造函数，可能引起调用上的不明确

    //p261
    //使用委托构造函数
    Sales_data(std::string s, unsigned cnt, double rev): bookNo(s), units_sold(n), revenue(rev*cnt) {}
    Sales_data(): Sales_data("", 0, 0) {}
    Sales_data(std::string s): Sales_data(s, 0, 0) {}
    Sales_data(std::istream &is): Sales_data() {read(is, *this);}//两层委托，最后执行函数体

    std::string isbn() const
    {
        return bookNo;
    }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//非成员接口函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

//lx7.40
class Book
{
public:
    Book(unsigned isbn, std::string const &name, std::string const &author, std::string const &pubdate)
    : isbn_(isbn), name_(name), author_(author), pubdate_(pubdate) {}
    explicit Book(std::istream &cin) {in >> isbn_ >> name_ >> author_ >> pubdate_; }

private:
    unsigned isbn_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};


#endif //TEMPROJ_SALES_DATA_H
