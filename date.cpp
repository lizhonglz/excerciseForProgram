#include "date.h"
#include"iostream"
using namespace std;
Date::Date(int y, int m, int d)
{
    if(m>0&&m<=monthsPerYear)
    {
        month=m;
    }
    else
    {
        month=1;
        cout<<"invalid month("<<m<<") set to 1"<<endl;
    }
    year=y;
    day=checkDay(d);
    cout<<"Date odject constructor for date"<<endl;
    print();
    cout<<endl;

}

Date::~Date()
{
    cout<<"Date object distructor for date"<<endl;
    print();
    cout<<endl;

}

void Date::print() const
{
    cout<<month<<'/'<<day<<"/"<<year;

}

int Date::checkDay(int testDay) const
{
    static const int daysPerMonth[monthsPerYear+1]=
    {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(testDay>0&&testDay<=daysPerMonth[month])
    {
        return testDay;
    }
    else if(month==2&&testDay==29&&
      ((year%400==0)||(year%4==0&&year%100!=0)))
    {
        return testDay;
    }
    else
    {
        cout<<"invalid day ("<<testDay<<") set to 1\n";
        return 1;
    }







}

