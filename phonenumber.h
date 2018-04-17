#ifndef PHONENUMBER_H
#define PHONENUMBER_H
/**************************************************************/
/***用于练习重载流插入和流读取运算符*********************************/
/**************************************************************/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class PhoneNumber
{
    friend ostream&operator<<(ostream& out, const PhoneNumber& pn);
    friend istream&operator>>(istream& in , PhoneNumber& pn);
public:
    PhoneNumber();
    ~PhoneNumber();
private:
    string areaCode_;                              /*电话号码三个组成部分             */
    string exchange_;                              /*格式：(areaCode)exchange-line */
    string line_;                                  /*长度依次为：3,3,4              */
};

#endif // PHONENUMBER_H
