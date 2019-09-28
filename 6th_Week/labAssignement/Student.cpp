#include "Student.h"
#include <iostream>


// Constructors
Student::Student()
{
	this -> firstName = "";
	this -> lastName = "";
	// to show that age is not initialized
	this -> age = -1;
  this -> address = "";
  this -> city = "";
  this -> phoneNumber = "";
}

Student::Student(std::string fName, std::string lName, unsigned short int age, 
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
Student::~Student()
{

}

// Setters

void Student::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

void Student::SetLastName(std::string lName)
{
	this->lastName = lName;
}

void Student::SetAge(unsigned short int age)
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

void Student::SetAddress(std::string ad)
{
	this->address = ad;
}

void Student::SetCity(std::string c)
{
	this->city = c;
}

void Student::SetPhoneNumber(std::string pn)
{
	this->phoneNumber = pn;
}
// Getters

std::string Student::GetFirstName()
{
	return this->firstName;
}

std::string Student::GetLastName()
{
	return this->lastName;
}


unsigned short int Student::GetAge()
{
	return this->age;
}

std::string Student::GetAddress()
{
	return this->address;
}

std::string Student::GetCity()
{
	return this->city;
}

std::string Student::GetPhoneNumber()
{
	return this->phoneNumber;
}



// member functions

void Student::SitInClass()
{
	std::cout << "Sitting in main theater" << std::endl;
}


