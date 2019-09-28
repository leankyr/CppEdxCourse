#ifndef COURSE_H
#define COURSE_H

#include "Teacher.h"
#include "Student.h"
#include <string>

class Course
{
    
private:
  
public:
  Student students[3];
  Teacher teacher;

  // Constructors
  Course();
  
  // Destructor       
  ~Course();
  
  // setters
  //void setStudent1(Student s);
  //void setStudent2(Student s);
  //void setStudent3(Student s);
  //void setTeacher(Teacher t);
};

#endif
