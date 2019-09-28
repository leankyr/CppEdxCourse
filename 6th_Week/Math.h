#ifndef MATH_H
#define MATH_H

// #pragma once

// Math class definition
// the static keyword allows us not 
// to instantiate the class to use the methods included
class Math
{ 
  public:
    // constructor
    Math();
    // destructor
    ~Math();
    // member fuMn
	  int pow(int base, int exp);

  private:
    int base;
    int exp;
};

#endif // MATH_H
