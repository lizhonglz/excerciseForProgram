#include"employee.h"
#include"phonenumber.h"
#include<iostream>
using namespace std;
int main()
{
    /*对Employee进行测试 ***********************************************************/
    cout<<"number of employees before instantiation of any objects is "
        <<Employee::getCount()<<endl;

    {
        Employee e1("Susan","Baker");
        Employee e2("Rpbert","Jones");

        cout<<"number of employees after instantiation of any objects is"
            <<Employee::getCount()<<endl;

        cout<<"Employee 1:"<<endl
            <<e1.getCount()<<" "<<e1.getLastName()<<endl
            <<"Employee 2:"<<endl
            <<e2.getCount()<<" "<<e2.getLastName()<<endl;
    }

    cout<<"number of employees after objects are deleted is "
        <<Employee::getCount()<<endl;

    /*对PhoneNumber进行测试*********************************************************/
    PhoneNumber phone;

    cout<<"Enter phone number in the form(123)456-7890"<<endl;
    cin>>phone;

    cout<<"The phone number entered was:"<<endl;
    cout<<phone<<endl;

    return 0;
}
