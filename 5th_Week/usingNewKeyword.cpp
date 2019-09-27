#include <iostream>

int main()
{ // allocate memory for int pointer
  int *pInt = new int;
  // allocate memory for double pointer
  double *pDouble = new double;
  
  // print the sizes
  // we get 4 bytes for the int
  std::cout << sizeof(*pInt) << std::endl;
  // we get 8 bytes for the double
  std::cout << sizeof(*pDouble) << std::endl;
  
  // print the addresses
  // beginning address of int pointer
  std::cout << pInt << std::endl;
  // ending address of int pointer
  std::cout << pInt + 1 << std::endl;

  // beginning address of double pointer
  std::cout << pDouble << std::endl;
  // ending address of double pointer
  std::cout << pDouble + 2 << std::endl;
  // output is hexadecimal remember!!  
  // ++ does not work
  
  // we use the delete keyword to deallocate the memory
  delete pInt;
  delete pDouble;
  return 0;
}
