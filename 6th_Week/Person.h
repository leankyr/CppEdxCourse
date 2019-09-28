#ifndef PERSON_H
#define PERSON_H

#include <string>
    
    class Person
    {
    
    private:
        std::string firstName;
        std::string lastName;
    
        int age;
    
    public:

				// Constructors
        Person();
        
				Person(std::string fName, std::string lName);
    
        Person(std::string fName, std::string lName, int age);
				
				// Destructors       
        ~Person();

				// Setters  
				void SetFirstName(std::string fName);
        void SetLastName(std::string lName);
        void SetAge(int age);
			
				// Getters	
				std::string GetFirstName();
        std::string GetLastName();
        int GetAge();

				// Member Functions
        void SayHello();
    };

#endif
