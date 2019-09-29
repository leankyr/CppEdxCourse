#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
class Student :
	public Person
{
public:
	Student();
	~Student();
	
	// set age and get age are declared here
	// we can access the age since in the base 
	// class is protected
	void setAge(int);
	int getAge();
	void SayHello();
};


#endif
