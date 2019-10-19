#include <vector>
#include <string>
#include <iostream>

using namespace std;

template<class TContainer>
class VecScopeGuard {
public:
    VecScopeGuard(TContainer* vecptr)
        : engaged_(true),vecptr_(vecptr) { //Assign vecptr and set guard to true.
    }

    ~VecScopeGuard() {
        // on the second vector since engaged is true (cause we never reached to 
        // disenage the vector) the last element is popped back
        if (engaged_) {
            //Remove last vector entry
            vecptr_->pop_back();
        }
    }
    void disengage() {
        engaged_ = false;
        //Vectors updated so release guard
    }
private:
    bool engaged_;
    TContainer* vecptr_;
};


int main()
{
    vector<string> firstvector;
    vector<string> secondvector;
    string mystring("Hello world!");
    try {
        // here everything works
        firstvector.push_back(mystring);
        VecScopeGuard<vector<string>> guard1(&firstvector);
        secondvector.push_back(mystring);
        // if the second vector throw a bad alloc exception, the vecScopeGuard would be out 
        // of scope, destructor of first vec would be called and the element would be popped back.
        VecScopeGuard<vector<string>> guard2(&secondvector);

        guard1.disengage();
        guard2.disengage();
    }
    catch(...) {
        cout << "Caught error." << endl;
    }

    cout << "First use of scope guards ok, first vector size is  " << firstvector.size() << " second vector size is " << secondvector.size() << endl;

    //Clear vectors.
    firstvector.clear();
    secondvector.clear();

    try {
        // again here we simulate error updating vec two
        firstvector.push_back(mystring);
        VecScopeGuard<std::vector<std::string>> guard1(&firstvector);
        std::bad_alloc excp;
        throw excp; //Replicate error updating second vector.
        // code bellow here is not executed because we are transferred to 
        // the exception handler as exception was threwn
        secondvector.push_back(mystring);
        VecScopeGuard<std::vector<std::string>> guard2(&secondvector);
        guard1.disengage();
        guard2.disengage();
    }
    catch (std::bad_alloc e) {
        // vectors get out of scope and the destructor of vec 1 is called
        cout << "Caught exception " << endl;
        // stil the sizes of the vectors are the same 
        cout << "Second use of scope guards error, first vector size is  " << firstvector.size() << " second vector size is " << secondvector.size() << endl;
    }
}    
