#include <iostream>

int main(){
  enum days {Mon = 1, Tue = 10, Wed = 5} d;
  d = Tue;


  // print the value!!
  // if Tue had no value it would print 2
  std::cout << "The d value is: " << d << std::endl;
  // Do the opposite??
  // std::cout << "The 2nd day is: " << days << std::endl;
  return 0;
}
