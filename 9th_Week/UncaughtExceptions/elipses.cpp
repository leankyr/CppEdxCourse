#include <iostream>

using namespace std;

int main() {
    try {
      // here we throw int exception, so it catches an int exception
      throw 20;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl; }
    catch (...) { cout << "All other exception types." << endl; }

    try {
      // here we throw a double exception, so it is handled
      // by the double exception handler 
      throw 20.0;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl; }
    catch (...) { cout << "All other exception types." << endl; }

    try {
      // Since this exception is bool, it is handled 
      // by the elipses handler (the three dots) 
      throw true;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl;}
    catch (...) { cout << "All other exception types." << endl; }
}
