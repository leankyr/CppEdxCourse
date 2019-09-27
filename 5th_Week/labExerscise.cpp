#include <iostream>

void passByValue(int);
void passByRef(int &);
// declare the class that gets object as params
class Person;
void ModifyPerson(Person &);

// 23 and bellow

class Person
{
  public:
    std::string name;
    int age;
    double height;
    double weight;
};

int main()
{
  //declare the int
  int num1;
  // create int var pNum
  int num2;
  //reference to the pNum variable
	int &pNum = num2; // do not worry that is called pNum!! It is a referance!!
  //assign value 3 to num1;
  num1 = 3;
  //assing 5 to the memory location stored in pNum
  num2 = 5;
  // call passByValue and give num1
  passByValue(num1);
  // output the value of num1 back in main
  std::cout << "Value of num1 is " << num1 << std::endl;
  // call passByRef with pNum 
  passByRef(pNum);
  // output the value of num1 back in main
  std::cout << "Value of pNum is " << pNum << std::endl;
  // call pass by valye with pNum as arg
  passByValue(pNum);
  // value of pNum after pass by value
  std::cout << "Value of pNum is " << pNum << std::endl;
  // 17 and bellow
  // create pointer for double and allocate memory for it using new keyword
  double *pDouble = new double;
  // assign a value to it
  *pDouble = 5.0;
  // print the value of the contained in the address the pDouble points to
  std::cout << *pDouble << std::endl;
  // deallocate memory
  delete pDouble;
  // print the value again  
  std::cout << *pDouble << std::endl;
  //26
  //instantiate a Person Object
  Person man;
  // assign values
  man.name = "George";
  man.age = 26;
  man.height = 1.80;
  man.weight = 67.0;
  // output values
  std::cout << "Name is " << man.name << std::endl;
  std::cout << "Age is " << man.age << std::endl;
  std::cout << "Height is " << man.height << std::endl;
  std::cout << "Weight is " << man.weight << std::endl;
  
  // call modify person
  ModifyPerson(man);
  // output values
  std::cout << "Name is " << man.name << std::endl;
  std::cout << "Age is " << man.age << std::endl;
  std::cout << "Height is " << man.height << std::endl;
  std::cout << "Weight is " << man.weight << std::endl;


	return 0;
}

void passByValue(int num1) // values in parentheses are the parameters
{
	std::cout << "passByValue()" << std::endl;
	// modify num1, won't impact num
	num1++;
  // output the num1 value
  std::cout << "num_in_val is now " << num1 << std::endl;
}

void passByRef(int &num1)
{
	std::cout << "passByRef()" << std::endl;

	// modify num1 which will now change num
	num1 = 50;

	std::cout << "num_in_ref is now " << num1 << std::endl;
}


void ModifyPerson(Person &man1) // need to pass by reference to change the name 
{ 
  man1.name = "Ivan";


}
