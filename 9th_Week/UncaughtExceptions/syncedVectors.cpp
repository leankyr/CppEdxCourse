#include <iostream>
#include <vector>

using namespace std;

void updateVector(std::vector<std::string>& firstvector_, std::vector<std::string>& secondvector_, std::string newString) {
    firstvector_.push_back(newString);
    try {
        secondvector_.push_back(newString);
    }
    catch (...) {
        firstvector_.pop_back();
        cout << "second vector update failed." << endl;
    }
}

void updateVector2(std::vector<std::string>& firstvector_, std::vector<std::string>& secondvector_, std::string newString) {
    firstvector_.push_back(newString);
    try {
				// here we simulate a failure of updating the second vector. 
				// So we roll back the update and we also roll back the update of the first vector
        std::bad_alloc excep;
        throw excep;
        secondvector_.push_back(newString);
    }
    catch (...) {
        firstvector_.pop_back();
        cout << "second vector update failed." << endl;
    }
}

int main() {
    std::vector<std::string> firstvector;
    std::vector<std::string> secondvector;
    std::string mystring("Hello world!");

    cout << "Calling updateVector " << endl;

    updateVector(firstvector, secondvector, mystring);

    cout << "first vector size is " << firstvector.size() << " second vector size is " << secondvector.size() << endl;

    cout << "Calling updateVector2 " << endl;

    updateVector2(firstvector, secondvector, mystring);

    cout << "first vector size is " << firstvector.size() << " second vector size is " << secondvector.size() << endl;

}
