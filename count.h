#ifndef COUNT
#define COUNT
#include<iostream>
using namespace std;

class Count
{
    friend void setX(Count&count1,int val);
public:
    Count()
        :x(0)
    {
        //empty
    }
    void print() const
    {
        cout<<x<<endl;
    }

private:
    int x;
};
void setX(Count&count1,int val)
{
    count1.x=val;
}

#endif // COUNT

