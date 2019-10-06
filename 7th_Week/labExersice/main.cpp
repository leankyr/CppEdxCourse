// include class files
#include "Person.h"
#include "Teacher.h"
#include "Student.h"

#include <iostream>
	
int main()
{  Student stud1("John", "Doe", "Caucasian", 21, "123-4567");
   Teacher teacher("TJohn", "TDoe", "TCaucasian", 51, "T123-4567");

   stud1.OutputAge();
   teacher.OutputAge();
    return 0;
}

