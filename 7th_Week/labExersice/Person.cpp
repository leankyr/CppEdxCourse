#include "Person.h"
#include <iostream>


// Constructors
/*
Person::Person()
{
	this -> firstName = "";
	this -> lastName = "";
	this -> race = "";
  // to show that age is not initialized
	this -> age = -1;
  this -> phoneNumber =  "";
}
*/
Person::Person(std::string fName, std::string lName, std::string r, int age, std::string pn)
{
	this -> firstName = fName;
	this -> lastName = lName;
  this -> race = r;
	this -> age = age;
  this -> phoneNumber = pn;
}

// Destructor
Person::~Person()
{

}

void OutputAge(int age)
{
  std::cout << "I am " << age << " years old" << std::endl;
}


// Here there is nothing aboud the pure virtual methods
