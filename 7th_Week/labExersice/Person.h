#ifndef PERSON_H
#define PERSON_H

#include <string>
    
    class Person
    {
    
    private:

    protected:
        std::string phoneNumber;
        int age;

    public:
        std::string firstName;
        std::string lastName;
        std::string race;

				// Constructors
        // Person();
        
        Person(std::string fName, std::string lName, std::string r, int age, std::string pn);
				
				// Destructors       
        virtual ~Person();
            
        // Virtual method - Can be overriden in derived classes
        virtual void OutputAge();
        // Pure Virtual method - it HAS to be implemented
        // in derived classes
        virtual void OutputIdentity() = 0;
		};

#endif
