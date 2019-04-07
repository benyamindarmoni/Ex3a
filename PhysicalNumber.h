//



// Created by Danielle2 on 02/04/2019.



//
#pragma once
#include "Unit.h"
#include <iostream>
using namespace std;
namespace ariel
{
    class PhysicalNumber
    {
    public:
        double value;
        Unit unit;
        PhysicalNumber(double num, Unit type):value(num),unit(type)
        {

        }
        bool operator==(const PhysicalNumber &rhs);
        bool operator!=(const PhysicalNumber &rhs);
        bool operator<(const PhysicalNumber &rhs);
        bool operator>(const PhysicalNumber &rhs);
        bool operator<=(const PhysicalNumber &rhs);
        bool operator>=(const PhysicalNumber &rhs);
        friend ariel::PhysicalNumber& operator+=(PhysicalNumber& rhs,const ariel::PhysicalNumber& lhs);
        PhysicalNumber &operator-=(PhysicalNumber &rhs);
        PhysicalNumber &operator+(const PhysicalNumber &rhs);
        PhysicalNumber &operator-(const PhysicalNumber &rhs);
        PhysicalNumber &operator-();
        PhysicalNumber &operator+();
        PhysicalNumber &operator++();
        PhysicalNumber &operator--();
        friend istream& operator>> (istream& in, ariel::PhysicalNumber& a);
        friend ostream& operator<<(ostream& out,const ariel::PhysicalNumber& a);
        std::string getType();
        double getData();
    };
}
