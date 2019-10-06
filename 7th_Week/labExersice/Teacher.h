#ifndef Teacher_H
#define Teacher_H

#include "Person.h"
#include <string>
    
    class Teacher : public Person
    {
    
    private:
                
    public:

				// Constructors
        Teacher(std::string firstName, std::string lastName, std::string race, int age, std::string phoneNumber);
        
				// Destructors - It needs to be virtual cause we have a virtual fun 
        // in base class
        virtual ~Teacher();

        // override the virtual function
        virtual void OutputAge();
        // implement pure virtual funs
        virtual void OutputIdentity();
		};

#endif
