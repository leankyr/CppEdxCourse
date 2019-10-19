#include <iostream>
#include <string>

double division(int a, int b); 

int main() {
	try{
		// protected code
		std::cout << division(2,3) << std::endl;
		std::cout << division(2,0) << std::endl;
	}
	catch (const char* msg){
		std::cerr << msg << std::endl;	
	}


/*
  try{
    throw 6;
    // protected code   
  }
  catch(int e) {
    std::cout << "int exception thrown " << std::to_string(e) << std::endl;
  }
*/
	return 0;
}

double division(int a, int b) {
  if( b == 0 ) {
		// This is the msg that goes above 
    throw "div by zero!";
  }
  return (a/float(b));
}
