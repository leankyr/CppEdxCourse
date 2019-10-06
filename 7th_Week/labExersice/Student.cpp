#include "Student.h"
#include <iostream>


// Constructors
// Calls the base constructor

// Does not compile needs sth
Student::Student(std::string firstName, std::string lastName, std::string race, int age, std::string phoneNumber):Person(firstName, lastName, race, age, phoneNumber)
{

}
// Destructor
Student::~Student()
{

}

// overrride the virtual function 

void Student::OutputAge()
{  
  Student::OutputIdentity(); 
  Person::OutputAge();
}

void Student::OutputIdentity()
{
  std::cout << "I am a student" << std::endl;
}

