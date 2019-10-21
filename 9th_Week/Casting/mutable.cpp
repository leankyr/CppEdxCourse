#include <iostream>
#include <string>

using namespace std;

class myClass {

public:
    myClass(std::string s = "")
    {
        str = s;
    }
    void print() const
    {
        cout << str << endl;
    }

    void change(std::string chgstr) const {
        str = chgstr;
    }

private:	
		// this variable is allowed to be changed even if the declared object is const as shown
		// Other potential member varibles without the mutable keyword would be possible to be changed 
		// from outside?
    mutable std::string str;
};


int main()
{		// We see than even if the object is const the string changes
    const myClass cc("Hello World !!!!");
    std::string mystring("The string has changed.");
    cc.change(mystring);
    cc.print();

    return 0;
}

