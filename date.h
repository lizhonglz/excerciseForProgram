#ifndef DATE_H
#define DATE_H


class Date
{
public:
    static const int monthsPerYear=12;
    Date(int y=1900,int m=1,int d=1);
    ~Date();

    void print() const;

private:
    int checkDay(int testDay) const;

    int year;
    int month;
    int day;

};

#endif // DATE_H
