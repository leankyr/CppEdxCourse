#include <iostream>

using namespace std;

int main() {
	try {
    try {
        //Do something here that causes an exception
        throw 10;
    }
    catch (int numb) {
        cout << "Caught int exception." << endl;
        // no type exception so caught by the elipses.
        // Also it is forwarded to the parent handler below.
        throw;
    }
	}
	catch (...) {
    cout << "An error occurred." << endl;
	}  

  return 0;
}
