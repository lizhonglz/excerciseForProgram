#include "array.h"
/**************************************************************************************/
/*********** 全局函数重载                *********************************************/
/**************************************************************************************/
ostream &operator<<(ostream& out, const Array &array)
{
    int i;
    for(i=0;i<array.getSize();i++)
    {

        out<<setw(12)<<array[i];
        if((i+1)%4==0)
            out<<endl;
    }

    if(i%4!=0)
        out<<endl;

    return out;
}
istream &operator>>(istream &in, const Array &array)
{
    int i;
    for(i=0;i<array.getSize();i++)
    {
        in>>array[i];

    }
    return in;
}
/**************************************************************************************/
/*********** 类的成员函数重载                *********************************************/
/**************************************************************************************/


Array::Array(int size)
{
    size_=(size>0? size:10);
    ptr_=new int[size];

    int i;
    for(i=0;i<size;i++)                            /*将数组元素初始化为0                    */
    {
        ptr_[i]=0;
    }





}

Array::Array(const Array &array)                   /*复制构造函数,因含有动态指针，必须设置       */
    :size_(array.getSize())
{
    ptr_=new int [size_];

    int i;
    for(i=0;i<size_;i++)
    {
        ptr_[i]=array.ptr_[i];
    }
}

Array::~Array()
{
    delete [] ptr_;

}

int Array::getSize() const
{
    return size_;
}

const Array &Array::operator=(const Array & array) /*赋值运算符重载,包含动态指针必须重载           */
{
    if(&array!=this)                               /*若不是同一块内存, 进行赋值操作               */
    {
        if(size_!=array.getSize())
        {
            delete [] ptr_;
            size_=array.getSize();
            ptr_=new int [size_];
        }

        int i;
        for(i=0;i<size_;i++)
        {
            ptr_[i]=array.ptr_[i];
        }

        return array;

    }

    return *this;
}

bool Array::operator ==(const Array &array) const  /*相等运算符重载                           */
{
    if(this->getSize()!=array.getSize())
    {
        return false;
    }

    int i;
    for(i=0;i<this->getSize();i++)
    {
        if(this->ptr_[i]!=array.ptr_[i])
        {
            return false;
        }
    }

    return true;
}

bool Array::operator!=(const Array &array) const   /*不等运算符重载                           */
{
    return !(*this==array);

}

int &Array::operator[](int position)               /*重载[],实现array[position]              */
{
    if(position>=0&&position<this->getSize())       /*检查数组下标是否越界                      */
    {
        return ptr_[position];
    }
    else
    {
        cout<<"Error: position is out of range"<<endl;
        exit(1);
    }


}

int &Array::operator[](int position) const         /*对const类型对象array实现array[position]  */
{
    if(position>=0&&position<this->getSize())       /*检查数组下标是否越界                      */
    {
        return ptr_[position];
    }
    else
    {
        cout<<"Error: position is out of range"<<endl;
        exit(1);
    }


}

