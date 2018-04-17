#ifndef EMPLOYEE_H
#define EMPLOYEE_H
/************************************************************/
/*****Employee : 员工，用来演示,学习static数据成员的使用***********/
/************************************************************/
#include<string>
using namespace std;

class Employee
{
public:
    Employee(const string&fn, const string&ln);  /*对count_加一，实现对Employee对象的统计*/
    ~Employee();

    string getFirstname() const;
    string getLastName()  const;

    static int getCount();

private:
    string firstName_;                           /*雇员姓名                          */
    string lastName_;

    static int count_;                           /*用来统计雇员个数                    */
};

#endif // EMPLOYEE_H
