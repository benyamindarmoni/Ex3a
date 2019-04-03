//
// Created by Danielle2 on 02/04/2019.
//
#pragma once
#include "Unit.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <csignal>
#include <csetjmp>

using std::string;
using std::ostream;
using std::endl;
using std::cerr;
using std::exception;
using std::ostringstream;
using std::istringstream;
using std::to_string;
namespace ariel
{
    class PhysicalNumber
    {
    public:
        PhysicalNumber(int a, ariel::Unit);
        bool operator==(const PhysicalNumber& rhs);
        bool operator!=(const PhysicalNumber& rhs);
        bool operator<(const PhysicalNumber& rhs);
        bool operator>(const PhysicalNumber& lhs, const PhysicalNumber& rhs);
        bool operator<=(const PhysicalNumber& lhs, const PhysicalNumber& rhs);
        bool operator>=(const PhysicalNumber& lhs, const PhysicalNumber& rhs);
        inline PhysicalNumber& operator+=(PhysicalNumber& rhs);
        inline PhysicalNumber& operator-=(PhysicalNumber& rhs);
        inline PhysicalNumber& operator+(PhysicalNumber lhs, const PhysicalNumber& rhs );
        inline PhysicalNumber& operator-(PhysicalNumber lhs, const PhysicalNumber& rhs );
        inline PhysicalNumber& operator-();
        inline PhysicalNumber& operator+();
        inline PhysicalNumber& operator++();
        inline PhysicalNumber& operator--();
        inline std::ostream& operator<<(std::ostream& os, const PhysicalNumber& obj);
        inline std::istream& operator>>(std::istream& is, PhysicalNumber& obj);

    };

}

