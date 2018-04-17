#include "phonenumber.h"

ostream &operator<<(ostream &out, const PhoneNumber &pn)
{
    out<<"("<<pn.areaCode_<<")"
       <<pn.exchange_<<"-"<<pn.line_;
    return out;
}

istream &operator>>(istream &in, PhoneNumber &pn)
{
    in.ignore();
    in>>setw(3)>>pn.areaCode_;
    in.ignore(2);
    in>>setw(3)>>pn.exchange_;
    in.ignore(1);
    in>>setw(4)>>pn.line_;

    return in;
}

PhoneNumber::PhoneNumber()
{
   /*空*****/
}

PhoneNumber::~PhoneNumber()
{
   /*空*****/
}

