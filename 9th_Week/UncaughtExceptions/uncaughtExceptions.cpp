#include <iostream>

using namespace std;

class throwexception {
public:
    throwexception(); //Constructor

    ~throwexception();  //Destructor
};

throwexception::throwexception(void) {
    cout << "throwexception object constructed" << endl;
    //Constructor
}

throwexception::~throwexception(void) {
    //Destructor
		// !! bad practise! Never do it!!
    cout << "throwexception destructor called." << endl;
    throw 9;
}

int main() {
    try {
        throwexception texc;
        cout << "Throwing exception will cause termination of program." << endl;
        throw 7; // here we throw this exception
    }
    catch (...) {
				// when we get in the excepion handler the throexception goes out of scope 
				// so it is destroyed.
				// Then the destructor is called throws an exception an the exception handling 
				// code is never executed
        //Catch exception
        cout << "Main Exception caught" << endl;
    }
} 
