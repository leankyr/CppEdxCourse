#include <iostream>
#include <exception>

using namespace std;

// Our derived exception Class
class derivedexception: public exception {
	// overriden base class function what() which returns
	// const char* type var 
	virtual const char* what() const throw() {
		return "My derived exception";
	}
} myderivedexception;

int main () {
	try {
		// again protected code
		throw myderivedexception; // Control is transferred to the exception handler below
	}
	// exception handler
	// the type passed as a parameter to catch is compared to the type of the thrown 
	// exception. In this case it is exception and our class deriveexception inherits from 
  // exception so the handler for derived exception is executed and when we invoke the 
  // function what() “My derived exception” is returned.
	catch (exception& e) {
		cout << e.what() << '\n';
	}
}
