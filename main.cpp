#include"increment.h"
#include"time.h"
#include"employee.h"
#include"count.h"
#include"test.h"
#include<iostream>
using namespace std;
int main()
{
    Time wakeup(6,45,0);
    const Time noon(12,0,0);
    wakeup.setHour(18);

    wakeup.getHour();
    noon.getMinute();
    noon.printUniversal();
    cout<<endl<<endl;
//**********************************************
//**********************************************

    Increment value(10,5);
    cout<<"before incrementing";
    value.print();

    for(int j=1;j<=3;j++)
    {
        value.addIncrement();
        cout<<"after incrementing:"<<j<<":";
        value.print();

    }
    cout<<endl;
//***********************************************
//***********************************************
    Date birth(1949,7,24);
    Date hire(1988,3,12);
    Employee manager("Bob","Blue",birth,hire);
    cout<<endl;
    manager.print();

    cout<<"\ntest Date constructor with invalid values"<<endl;
    Date lastDayOff(1944,14,35);
    cout<<endl;

//************************************************
//************************************************
    Count counter;
    cout<<"couter.x after instantition:";
    counter.print();

    setX(counter,8);
    cout<<"counter.x after call to setX friend function:";
    counter.print();
    cout<<endl;
//************************************************
//************************************************
    Test testObject(12);
    testObject.print();
    cout<<endl;

//*************************************************
//*************************************************
    Time t(1,1,1);
    t.setHour(18).setMinute(30).setSecond(22);
    t.printStandard();
    cout<<endl;
    t.printUniversal();
    cout<<endl;
    t.setTime(1,2,3).printStandard();
    cout<<endl;
    return 0;
}
