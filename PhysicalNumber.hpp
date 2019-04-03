//
// Created by Danielle2 on 02/04/2019.
//
#pragma once
#include "Unit.h"
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
        int num;

        PhysicalNumber(int num, ariel::Unit);

        bool operator==(const PhysicalNumber &rhs);

        bool operator!=(const PhysicalNumber &rhs);

        bool operator<(const PhysicalNumber &rhs);

        bool operator>(const PhysicalNumber &rhs);

        bool operator<=(const PhysicalNumber &rhs);

        bool operator>=(const PhysicalNumber &rhs);

        PhysicalNumber &operator+=(PhysicalNumber &rhs);

        PhysicalNumber &operator-=(PhysicalNumber &rhs);

        PhysicalNumber &operator+(const PhysicalNumber &rhs);

        PhysicalNumber &operator-(const PhysicalNumber &rhs);

        PhysicalNumber &operator-();

        PhysicalNumber &operator+();

        PhysicalNumber &operator++();

        PhysicalNumber &operator--();
        std::ostream& operator<<(std::ostream& os);
        std::istream &operator>>(std::istream &is);

    };

}
