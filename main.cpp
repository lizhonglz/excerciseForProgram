#include"date.h"
#include<iostream>
using namespace std;

int main()
{
    /************测试Date类  ************************/

    Date d1;
    Date d2(12,27,1992);
    Date d3(0,99,8045);


    cout<<"d1 is："<<d1<<endl
        <<"d2 is: "<<d2<<endl
        <<"d3 is: "<<d3<<endl;

    d3.setDate(2,28,1992);
    cout<<"after d3.setDate(2,18,1992) d3 is"<<d3;
    cout<<"++d3  is"<<++d3<<"leap year allows 29th"<<endl;

    Date d4(7,13,2002);

    cout<<"d4 is"<<d4<<endl
        <<"d4++ is"<<d4++<<endl
        <<"after d4++ d4 is"<<d4<<endl;

    return 0;
}
