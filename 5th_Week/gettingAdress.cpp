#include <iostream>

int main()
{
	// init the var	
	int num = 3;
	// pNum points to address of num
	int *pNum = &num;
	// we dereference operator to print the actual value 
	// stored in that adress (we get direct access to that adress)
	std::cout << *pNum << std::endl;
	// pNum (the pointer var) shows us the address in memory of num
	std::cout << pNum << std::endl;

	// I change the value of the data stored in the adress the pointer points too
	*pNum = 21;
	// we print it!!
	std::cout << *pNum << std::endl;
	// we notice that also the value of num changes!
	std::cout << num << std::endl;
	return 0;
}
