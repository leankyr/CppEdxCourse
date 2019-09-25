#include <iostream>

int main(){
  // define my new var type
  typedef float liters;
  // I guess code is more readable
  liters milk = 2.5; 
  // print the value!!
  std::cout << "The milk value is: " << milk << std::endl;
  return 0;
}
