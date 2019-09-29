#include "Person.h"
#include "Student.h"

int main()
{

	Student student1;

	// this line will generate a compiler error
  // first name private in base person stays private in deived class Student
	// student1.firstName = "Tom";

	// this line is ok
	student1.SayHello();


	return 0;
}
