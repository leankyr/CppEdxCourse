#include <iostream>

// the preprocesoor define does not have any type limitation
// By convention we use capitals
// We can only define chars!!
#define PI 3.14
#define NAME 'g'
// We can also use the const keyword if we want to bind 
// a constant to a type

const float height = 1.80;
const int lucky_num = 7;

int main()
{ // print pi
  std::cout << "PI is: " << PI << std::endl;
  std::cout << "My name is: " << NAME << std::endl;
  std::cout << "My height is: " << height << std::endl;
  std::cout << "My lucky_num is: " << lucky_num << std::endl;
	return 0;
}
