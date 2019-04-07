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



ariel::PhysicalNumber &ariel::operator+=(ariel::PhysicalNumber &rhs,const ariel::PhysicalNumber &lhs)

{

    return rhs;

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


istream& ariel::operator>>(istream &in, ariel::PhysicalNumber &a)

{

    return in;

}
ostream& ariel::operator<<(ostream &out,const ariel::PhysicalNumber &a)

{

    return out;

}





