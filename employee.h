#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"date.h"
#include<string>
using namespace std;
class Employee
{
public:
    Employee(const string &fn,const string &ln,
             const Date&bd,const Date&hd);
    ~Employee();

    void print() const;
private:
    string firstName;
    string lastName;
    const Date birthDate;
    const Date hireDate;
};

#endif // EMPLOYEE_H
