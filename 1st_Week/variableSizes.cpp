#include <iostream>

int main(){
  // declare some variables 
  int feet;
  double cash;
  char c;
  // print their sizes using sizeof
  std::cout << "The size of feet is: " << sizeof(feet) << " bytes!" << std::endl;
  std::cout << "The size of cash is: " << sizeof(cash) << " bytes!" << std::endl;
  std::cout << "The size of c is: " << sizeof(c) << " bytes!" << std::endl;
  return 0;
}
