#ifndef TEACHER_H
#define TEACHER_H

#include <string>
    
    class Teacher
    {
    
    private:
        // Names
        std::string firstName;
        std::string lastName;
        // age
        unsigned short int age;
        // adress
        std::string address;
        // city
        std::string city;
        //phone number
        std::string phoneNumber;
        
    public:

				// Constructors
        Teacher();
        
        Teacher(std::string fName, std::string lName, unsigned short int age, 
            std::string ad, std::string c, std::string pn);
				
				// Destructors       
        ~Teacher();

				// Setters  
				void SetFirstName(std::string fName);
        void SetLastName(std::string lName);
        void SetAge(unsigned short int age);
			  void SetAddress(std::string ad);
			  void SetCity(std::string c);
			  void SetPhoneNumber(std::string pn);

				// Getters	
				std::string GetFirstName();
        std::string GetLastName();
        unsigned short int GetAge();
        std::string GetAddress();
        std::string GetCity();
        std::string GetPhoneNumber();
				// Member Functions
        void GradeStudent();
        void SitInClass();
    };

#endif
