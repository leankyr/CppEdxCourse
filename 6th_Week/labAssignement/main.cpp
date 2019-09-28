// include class files
#include "Course.h"
#include "Teacher.h"
#include "Student.h"

#include <iostream>
	
int main()
{ 
  // instantiate student objects
  Student student1("A", "A", 20, "A", "A", "123-4567");
  Student student2("B", "B", 20, "B", "B", "123-45678");
  Student student3("C", "C", 20, "C", "C", "123-45679");
  Student stud1;
  // instantiate Teacher
  Teacher teacher("T", "T", 40, "T", "T", "123-456789");
  // instantiate a Course object
  Course IntermediateCplusplus;
  IntermediateCplusplus.students[0] = student1;
  IntermediateCplusplus.students[1] = student2;
  IntermediateCplusplus.students[2] = student3;
  // add the Teacher object
  IntermediateCplusplus.teacher = teacher; 

  std::cout << "IntermediateC++" << std::endl;
  teacher.GradeStudent();
  teacher.SitInClass();
  
  std::string f = stud1.GetFirstName();
  std::string l = stud1.GetLastName();
  unsigned short int a = stud1.GetAge();
  std::string ad = stud1.GetAddress();
  std::string c = stud1.GetCity();
  std::string p = stud1.GetPhoneNumber();

  std::cout << f << std::endl;
  std::cout << l << std::endl;
  std::cout << a << std::endl;
  std::cout << ad << std::endl;
  std::cout << c << std::endl;
  std::cout << p << std::endl;




  return 0;
}

