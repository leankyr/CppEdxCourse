//#include "Math.h"
#include <iostream>

int main()
{ 
  // in order to use a function from a class
  // you need to use and object
  // container classes are not supported???
  Math num; 
  int result = num.pow(2, 10);

  std::cout << result << std::endl;

	return 0;
}
