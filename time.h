#ifndef TIME_H
#define TIME_H


class Time
{
public:
    Time(int h,int m,int s);
    ~Time();

    Time&setTime(int h,int m,int s);
    Time&setHour(int h);
    Time&setMinute(int m);
    Time&setSecond(int s);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void printUniversal() const;
    void printStandard();
private:
    int hour;
    int minute;
    int second;
};

#endif // TIME_H
