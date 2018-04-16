#include "employee.h"
#include<iostream>
using namespace std;

Employee::Employee(const string &fn, const string &ln, const Date &bd, const Date &hd)
    :firstName(fn),lastName(ln),
      birthDate(bd),hireDate(hd)
{
    cout<<"Employee object constructor:"
        <<firstName<<' '<<lastName<<endl;

}

Employee::~Employee()
{
    cout<<"Employee object destructor:"
        <<lastName<<","<<firstName<<endl;
}

void Employee::print() const
{
    cout<<lastName<<","<<firstName<<"hired:";
    hireDate.print();
    cout<<"birthday:";
    birthDate.print();
    cout<<endl;

}

