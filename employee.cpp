#include "employee.h"
int Employee::count_=0;                        /*初始化count_                      */
/**/
/**********输入：fn：雇员姓；ln:雇员名***************************/
/**/
Employee::Employee(const string &fn, const string &ln)
    :firstName_(fn),lastName_(ln)
{
    count_++;
}

Employee::~Employee()
{
   /*空******/
}

string Employee::getFirstname() const
{
    return firstName_;

}

string Employee::getLastName() const
{
    return lastName_;
}

int Employee::getCount()
{
    return count_;
}

