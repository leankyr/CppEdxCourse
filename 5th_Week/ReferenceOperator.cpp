#include <iostream>

int main()
{
	// I asssign a value to an integer
	int num = 3;
	// i declare a reference to num
  int &refNum = num;
	// I get the value of num
  std::cout << refNum << std::endl;
	// increase the value of refNum by 1
	refNum++;
	// print the value of refNum	
  std::cout << refNum << std::endl;
	// notice that also the value of num changed!!
  std::cout << num << std::endl;
  // now print the adressed of the variables:
  std::cout << "refNum is located at " << &refNum << " and num is located at " << &num << std::endl;
	return 0;
}
