#include "Person.h"
#include <iostream>


// Constructors
Person::Person()
{
	this -> firstName = "";
	this -> lastName = "";
	// to show that age is not initialized
	this -> age = -1;

}

Person::Person(std::string fName, std::string lName)
{
	this -> firstName = fName;
	this -> lastName = lName;
	// to show that age is not initialized
	this -> age = -1;
}

Person::Person(std::string fName, std::string lName, int age)
{
	this -> firstName = fName;
	this -> lastName = lName;

	this -> age = age;
}

// Destructor
Person::~Person()
{

}

// Setters

void Person::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

void Person::SetLastName(std::string lName)
{
	this->lastName = lName;
}

void Person::SetAge(int age)
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

// Getters

std::string Person::GetFirstName()
{
	return this->firstName;
}

std::string Person::GetLastName()
{
	return this->lastName;
}


int Person::GetAge()
{
	return this->age;
}

// member functions

void Person::SayHello()
{
	std::cout << "Hello!" << std::endl;
}


