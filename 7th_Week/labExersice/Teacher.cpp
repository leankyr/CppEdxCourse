#include "Teacher.h"
#include "Person.h"
#include <iostream>


// Constructors
// Calls the base constructor
//Teacher::Teacher():Person()
//{

//}
Teacher::Teacher(std::string firstName, std::string lastName, std::string race, int age, std::string phoneNumber):Person(firstName, lastName, race, age, phoneNumber)
{

}


// Destructor
Teacher::~Teacher()
{

}

// overrride the virtual function 

void Teacher::OutputAge()
{  
  Teacher::OutputIdentity(); 
  Person::OutputAge();
}

void Teacher::OutputIdentity()
{
  std::cout << "I am a teacher" << std::endl;
}

