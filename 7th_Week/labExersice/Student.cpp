#include "Student.h"
#include <iostream>


// Constructors
// Calls the base constructor

// Does not compile needs sth
Student::Student():Person(firstName, lastName, race, age, phoneNumber)
{

}
// Destructor
Student::~Student()
{

}

// overrride the virtual function 

void Student::OutputAge(int inita)
{  
  Student::OutputIdentity(); 
  Person::OutputAge(inita);
}

void Student::OutputIdentity()
{
  std::cout << "I am a student" << std::endl;
}

