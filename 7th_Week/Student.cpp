#include "Student.h"

#include <iostream>
    
Student::Student()
{
}


Student::~Student()
{
}

void Student::setAge(int age)
{
  if (age < 5)
  {
    std::cout << "Student age needs to at least 5 years old." << std::endl;
  }
  else
  {
    this->age = age;
  }
}
// here the methosds are defined
// if in the Person base class ages becomes private
// then the Student class cannot access it 
// and we get a compilation error
int Student::getAge()
{
	return this->age;
}

void Student::SayHello()
{
	std::cout << "Hey, how's it goin'?" << std::endl;
}
