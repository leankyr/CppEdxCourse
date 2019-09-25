#include <iostream>
 
/* This program shows the difference between
   * signed and unsigned integers.
*/
int main() {
   short int i;           // a signed short integer
   short unsigned int j;  // an unsigned short integer

   j = 50000;

   i = j;
  std::cout << i << " " << j << std::endl;
	/*
		The above result is because the bit pattern that represents 50,000 as 
		a short unsigned integer is interpreted as -15,536 by a short.
	*/
   return 0;
}
