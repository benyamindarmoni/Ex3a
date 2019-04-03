//
// Created by Danielle2 on 02/04/2019.
//

#include <iostream>

#include <sstream>

#include <stdexcept>


using std::cout;
using std::endl;
using std::istringstream;
using std::boolalpha;

#include "PhysicalNumber.hpp"

#include "Unit.hpp"

using ariel::PhysicalNumber;
using ariel::Unit;



int main()
{

}


ariel::PhysicalNumber::PhysicalNumber(int a, ariel::Unit)
{


}

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

PhysicalNumber &ariel::PhysicalNumber::operator+=(PhysicalNumber &rhs)
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator-=(PhysicalNumber &rhs)
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator+(PhysicalNumber lhs, const PhysicalNumber &rhs)
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator-(PhysicalNumber lhs, const PhysicalNumber &rhs)
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator-()
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator+()
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator++()
{
    return *this;
}

PhysicalNumber &ariel::PhysicalNumber::operator--()
{
    return *this;
}

std::ostream &ariel::PhysicalNumber::operator<<(std::ostream &os, const PhysicalNumber &obj)
{
    return os;
}

std::istream &ariel::PhysicalNumber::operator>>(std::istream &is, PhysicalNumber &obj)
{
    return is;
}



