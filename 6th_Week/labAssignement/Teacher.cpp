#include "Teacher.h"
#include <iostream>


// Constructors
Teacher::Teacher()
{
	this -> firstName = "";
	this -> lastName = "";
	// to show that age is not initialized
	this -> age = -1;
  this -> address = "";
  this -> city = "";
  this -> phoneNumber = "";
}

Teacher::Teacher(std::string fName, std::string lName, unsigned short int age, 
    std::string ad, std::string c, std::string pn)
{
	this -> firstName = fName;
	this -> lastName = lName;
	// to show that age is not initialized
	this -> age = age;
  this -> address = ad;
  this -> city = c;
  this -> phoneNumber = pn;

}

// Destructor
Teacher::~Teacher()
{

}

// Setters

void Teacher::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

void Teacher::SetLastName(std::string lName)
{
	this->lastName = lName;
}

void Teacher::SetAge(unsigned short int age)
{
	if (age > 0)
	{
		this->age = age;
	}
	else
	{
		std::cout << "Please enter a valid age" << std::endl;
	}
}

void Teacher::SetAddress(std::string ad)
{
	this->address = ad;
}

void Teacher::SetCity(std::string c)
{
	this->city = c;
}

void Teacher::SetPhoneNumber(std::string pn)
{
	this->phoneNumber = pn;
}
// Getters

std::string Teacher::GetFirstName()
{
	return this->firstName;
}

std::string Teacher::GetLastName()
{
	return this->lastName;
}


unsigned short int Teacher::GetAge()
{
	return this->age;
}

std::string Teacher::GetAddress()
{
	return this->address;
}

std::string Teacher::GetCity()
{
	return this->city;
}

std::string Teacher::GetPhoneNumber()
{
	return this->phoneNumber;
}



// member functions


void Teacher::GradeStudent()
{
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class" << std::endl;
}
