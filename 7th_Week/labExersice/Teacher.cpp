#include "Teacher.h"
#include <iostream>


// Constructors
// Calls the base constructor
Teacher::Teacher():Person()
{

}
//Teacher::Teacher():Person(std::string firstName, std::string lastName, std::string race, int age, 
//    std::string phoneNumber)
//{

//}


// Destructor
Teacher::~Teacher()
{

}

// overrride the virtual function 

void Teacher::OutputAge(int age)
{  
  Teacher::OutputIdentity(); 
  Person::OutputAge();
}

void Teacher::OutputIdentity()
{
  std::cout << "I am a teacher" << std::endl;
}

