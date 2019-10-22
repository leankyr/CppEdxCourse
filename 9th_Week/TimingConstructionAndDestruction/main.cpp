#include <iostream>

using namespace std;

class MyClass {

public:
    MyClass() {
        cout << "MyClass constructor called." << endl;
    }

    ~MyClass() {
        cout << "MyClass deconstructor called." << endl;
    }

    std::string msg = "Hello World!!";
private:

};


int main() {
		// pointer to that type of object (does not call constructor)
    MyClass* mcptr;
		
    cout << "MyClass constructor for object mcptr not yet called." << endl;
		// to invoke the constructor assign object to the pointer using new keyword
		// Remember that objects allocated with new do not have their deconstructors 
		// called when they move out of scope and you need to directly call delete 
		// on the pointer or invoke the deconstructor explicitly.
    mcptr = new MyClass();

    cout << "MyClass deconstructor for object mcptr not yet called." << endl;
		// with delete keyword we invoke the destructor
    delete mcptr;

    cout << "Invoke constructor using placement new" << endl;
		// call constructor directly using new
    new(mcptr) MyClass();

    cout << "Invoke deconstructor by calling it explicitly" << endl;
		// invoke destructor by calling it explicitly
    mcptr->~MyClass();

    return 0;
}
