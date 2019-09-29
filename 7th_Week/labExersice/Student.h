#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
    
    class Student : public Person
    {
    
    private:
      std::string initfn;        
      std::string initln;        
      std::string initr;        
      int inita;        
      std::string initpn;        
    public:

				// Constructors
        Student();
        
				// Destructors - It needs to be virtual cause we have a virtual fun 
        // in base class
        virtual ~Student();

        // override the virtual function
        virtual void OutputAge(int inita);
        // implement pure virtual funs
        virtual void OutputIdentity();
		};

#endif
