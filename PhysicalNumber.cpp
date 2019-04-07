#include <iostream>

#include "PhysicalNumber.h"

using namespace std;

bool ariel::PhysicalNumber::operator==(const PhysicalNumber &rhs)
{
    return false;
}
bool ariel::PhysicalNumber::operator!=(const PhysicalNumber &rhs)
{
    return false;
}
bool ariel::PhysicalNumber::operator<(const PhysicalNumber &rhs)
{
    return false;
}
bool ariel::PhysicalNumber::operator>(const PhysicalNumber &rhs)
{
    return false;
}
bool ariel::PhysicalNumber::operator<=(const PhysicalNumber &rhs)
{
    return false;
}
bool ariel::PhysicalNumber::operator>=(const PhysicalNumber &rhs)
{
    return false;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator+=(const PhysicalNumber &rhs)
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator-=(PhysicalNumber &rhs)
{
    return *this;
}

ariel::PhysicalNumber& ariel::PhysicalNumber::operator+(const PhysicalNumber &rhs)
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator-(const PhysicalNumber &rhs)
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator-()
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator+()
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator++()
{
    return *this;
}
ariel::PhysicalNumber& ariel::PhysicalNumber::operator--()
{
    return *this;
}

istream &ariel::operator>>(istream &in, ariel::PhysicalNumber &a)
{
    return in;
}




ostream &ariel::operator<<(ostream &out, const ariel::PhysicalNumber &a)
{
    int b=(int)a.unit;
    return out<<a.value<<"["<<b<<"]"<<endl;
}

string ariel::PhysicalNumber::getType()
{
    int tempUnit=(int)this->unit;

    switch (tempUnit)
    {
        case 0: return "M";
        case 1: return "KM";
        case 2: return "CM";
        case 3: return "SEC";
        case 4: return "MIN";
        case 5: return "HOUR";
        case 6: return "G";
        case 7: return "KG";
        case 8: return "TON";
    }
    return "NULL";
}

double ariel::PhysicalNumber::getData()
{
    return (int)this->value;
}











