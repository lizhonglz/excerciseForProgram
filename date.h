#ifndef DATE_H
#define DATE_H
/***********************************************************************/
/****      Date日期类,对增一运算符++进行重载(练习)        ********************/
/***********************************************************************/
#include<iostream>
using namespace std;
class Date
{
    friend ostream& operator<<(ostream& out,const Date& date);
public:
    Date(int m=1, int d=1, int y=1900);
    ~Date();

    void setDate(int m, int d, int y);
    static bool isLeapYear(int y);                                   /*判断是否为闰年                      */


    Date& operator++();                                              /*先增一                            */
    Date  operator++(int);                                           /*后增一                            */

    const Date& operator+=(int d);                                   /*增加天数                          */


    bool isEndOfmonth(int d) const;                                  /*判断是否为一个月最后一天              */

private:

    int month_;
    int day_;
    int year_;

    static const int days[13];                                       /*一年中每个月的月份                   */
    void helpIncrement();                                            /*为日期累加一天                      */
};

#endif // DATE_H
