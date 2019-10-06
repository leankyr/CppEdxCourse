#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
    
    class Student : public Person
    {
    
    private:
    
    public:

				// Constructors
        Student(std::string firstName, std::string lastName, std::string race, int age, std::string phoneNumber);
        
				// Destructors - It needs to be virtual cause we have a virtual fun 
        // in base class
        virtual ~Student();

        // override the virtual function
        virtual void OutputAge();
        // implement pure virtual funs
        virtual void OutputIdentity();
		};

#endif
