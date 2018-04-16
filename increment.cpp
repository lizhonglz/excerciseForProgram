#include "increment.h"
#include"iostream"
using namespace std;
Increment::Increment(int c, int i)
    :count(c),increment(i)
{

}

Increment::~Increment()
{

}

void Increment::addIncrement()
{
    count+=increment;

}

void Increment::print() const
{
    cout<<"count"<<count<<", increment"<<increment<<endl;
}


