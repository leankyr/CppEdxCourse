#include "Person.h"
#include <iostream>
	
int main()
{ 	
	// Create Person using the default constructor
  Person *pOne = new Person(); 
 	// Create a person using the two args constructor
	Person *pTwo = new Person("Tilemachos", "Kyriazis"); 
	// Create a person using the three args constructor
	Person *pThree = new Person("Georgios Leandros", "Kyriazis", 26); 
 

	// Person one says hello!!
	pOne->SayHello();	
	// We need setters and getters to bring the results
  //pOne->SetFirstName("George");
  //pOne->SetLastName("Kyriazis");
  //pOne->SetAge(26);
  
  // print values for pOne
  std::cout << pOne->GetFirstName() << std::endl;
  std::cout << pOne->GetLastName() << std::endl;
  std::cout << pOne->GetAge() << std::endl;

  // print values for pTwo
  std::cout << pTwo->GetFirstName() << std::endl;
  std::cout << pTwo->GetLastName() << std::endl;
  std::cout << pTwo->GetAge() << std::endl;

  // print values for pThree
  std::cout << pThree->GetFirstName() << std::endl;
  std::cout << pThree->GetLastName() << std::endl;
  std::cout << pThree->GetAge() << std::endl;

  // init a person object
  Person p;
  // call by ref 
  Person &pRef = p;
  // again hello
  pRef.SayHello();

	// delete object to release memory

	delete pOne;
	delete pTwo;
	delete pThree;
  
  



  return 0;
}

