#include "time.h"
#include<iostream>
#include<iomanip>
using namespace std;
Time::Time(int h, int m, int s)
{
    setTime(h,m,s);
}

Time::~Time()
{

}

Time&Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this;
}

Time&Time::setHour(int h)
{
    hour=(h>=0&&h<=24)?h:0;
    return *this;
}

Time &Time::setMinute(int m)
{
    minute=(m>=0&&m<=60)? m:0;
    return *this;
}

Time&Time::setSecond(int s)
{
    second=(s>=0&&s<=60)? s:0;
    return *this;
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<hour<<":"
       <<setw(2)<<minute<<":"<<setw(2)<<second;
}

void Time::printStandard()
{
    cout<<((hour==0||hour==12)?12:hour%12)
        <<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12?"AM":"PM");

}


