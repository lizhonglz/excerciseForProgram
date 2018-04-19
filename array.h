#ifndef ARRAY_H
#define ARRAY_H
/***************************************************************/
/***创建一个功能更加完善的数组Array,包括：1边界越界检查        *********/
/***2流插入和输出整个数组  3用相等运算符==和!=进行比较         *********/
/***************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

class Array
{

public:
    Array(int size=10);
    Array(const Array& array);
    ~Array();

    int getSize() const;

    const Array& operator=(const Array& array);
    bool operator==(const Array& array) const;
    bool operator!=(const Array& array) const;

    int& operator[](int position);                           /*重载[],实现array[position]              */
    int& operator[](int position) const;                     /*对const类型对象array实现array[position]  */
private:
    int *ptr_;
    int size_;
};

ostream& operator<<(ostream& out, const Array& array);
istream& operator>>(istream& in , const Array& array);
#endif // ARRAY_H
