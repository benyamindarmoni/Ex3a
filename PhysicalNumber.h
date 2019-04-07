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
        //boolean
        bool operator==(const PhysicalNumber& rhs);
        bool operator!=(const PhysicalNumber& rhs);
        bool operator<(const PhysicalNumber& rhs);
        bool operator>(const PhysicalNumber& rhs);
        bool operator<=(const PhysicalNumber& rhs);
        bool operator>=(const PhysicalNumber& rhs);
        //+=,-=,+,-
        PhysicalNumber &operator+=(const PhysicalNumber& rhs);
        PhysicalNumber &operator-=(PhysicalNumber& rhs);
        PhysicalNumber &operator+(const PhysicalNumber& rhs);
        PhysicalNumber &operator-(const PhysicalNumber& rhs);
        //onary 
        PhysicalNumber& operator-();
        PhysicalNumber& operator+();
        //++,--
        PhysicalNumber& operator++();
        PhysicalNumber& operator--();
        //stream
        friend istream& operator>>(istream& in, const PhysicalNumber& a);
        friend ostream& operator<<(ostream& out, const PhysicalNumber& a);
       
    };
}
