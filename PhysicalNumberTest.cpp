
#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "PhysicalNumber.h"
using ariel::PhysicalNumber, ariel::Unit;
#include "badkan.hpp"

int main() {
  badkan::TestCase testcase;
  int grade=0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0) {

    // BASIC TESTS - DO NOT CHANGE
    PhysicalNumber a(2, Unit::KM);
    PhysicalNumber b(300, Unit::M);
    PhysicalNumber c(2, Unit::HOUR);
    PhysicalNumber d(30, Unit::MIN);

    testcase
    .setname("Basic output")
    .CHECK_OUTPUT(a, "2[km]")
    .CHECK_OUTPUT(b, "300[m]")

    .setname("Compatible dimensions")
    .CHECK_OUTPUT(b+a, "2300[m]")
    .CHECK_OUTPUT((a+=b), "2.3[km]")
    .CHECK_OUTPUT(a, "2.3[km]")
    .CHECK_OUTPUT(a+a, "4.6[km]")
    .CHECK_OUTPUT(b-b, "0[m]")
    .CHECK_OUTPUT(c, "2[hour]")
    .CHECK_OUTPUT(d, "30[min]")
    .CHECK_OUTPUT(d+c, "150[min]")

    .setname("Incompatible dimensions")
    .CHECK_THROWS(a+c)
    .CHECK_THROWS(a+d)
    .CHECK_THROWS(b+c)
    .CHECK_THROWS(b+d)

    .setname("Basic input")
    .CHECK_OK(istringstream("700[kg]") >> a)
    .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

    // YOUR TESTS - INSERT AS MANY AS YOU WANT
  PhysicalNumber x(2, Unit::HOUR);
    PhysicalNumber w(290, Unit:SEC);
    PhysicalNumber y(90, Unit::TON);
     PhysicalNumber z(304, Unit::KG);
      
    
      .setname("myTest")
        .CHECK_THROWS(x+y)
          .CHECK_THROWS(z+x)
         .CHECK_THROWS(w+z)
        .CHECK_THROWS(w+=z)
         .CHECK_THROWS(z+=x)
        .CHECK_OUTPUT(x, "2[HOUR]")
        .CHECK_OUTPUT(y, "90[TON]")
         .CHECK_OUTPUT(z, "304[KG]")
         .CHECK_OUTPUT(w, "290[SEC]")
                 .CHECK_OUTPUT(y++, "91[TON]")
 .CHECK_OUTPUT(w++, "291[SEC]")
         .CHECK_OUTPUT(w+x, "411[SEC]")
          .CHECK_OUTPUT(z+y, "90304[KG]")
        
        
        

        
       
      
      .print(cout, /*show_grade=*/false);
      grade = testcase.grade();
    } else {
      testcase.print_signal(signal);
      grade = 0;
    }
    cout <<  "*** Grade: " << grade << " ***" << endl;
    return grade;
}
