#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iterator>

using namespace std;
const double pi = 3.1415926535897;

class Circle {

public:
  // constructor 
	Circle(int rad) : radius(rad) {
		area = pi*radius*radius;
	}
  // overloading the operator 
  // for the sorting comparisson
	const bool operator < (const Circle &r) const {
		return (area < r.area);
	}
  // friend function to print the area when needed
	friend std::ostream& operator<< (std::ostream& stream, const Circle& cir) {
		stream << cir.area << "\n";
		return stream;
	}

private:
	int radius;
	double area;

};
// template function 
template<typename TContainer>
// three types one time int one time float one time user defined type
void bubbleSort(TContainer begin, TContainer end)
{
	TContainer i, j;
		for ( i = begin; i != end; i++) {
			//Loop around all elements in container.
			for ( j = begin; j != i; j++) {
				//Loop around container comparing current element to all others and bubble up.
				if (*i < *j) {
					//Swap elements.
					std::swap(*i, *j);
				}
			}
		}
}

// algorithm works for three different types hence it is generic


int main() {

	//Vector container
	vector<int> aVec;

	//List container.
	list<double> myList;

	//Vector of user defined objects
	vector<Circle> circleVec;

	aVec.push_back(5);
	aVec.push_back(4);
	aVec.push_back(3);
	aVec.push_back(2);
	aVec.push_back(1);

	myList.push_back(5.954);
	myList.push_back(4.873);
	myList.push_back(3.135);
	myList.push_back(2.851);
	myList.push_back(1.9999);

	circleVec.push_back(Circle(5));
	circleVec.push_back(Circle(4));
	circleVec.push_back(Circle(3));
	circleVec.push_back(Circle(2));
	circleVec.push_back(Circle(1));

	//Display and sort vector

	cout << "Vector before sorting " << endl;
	for (vector<int>::iterator it = aVec.begin(); it != aVec.end(); it++) {
		cout << *it;
	}
	cout << endl << endl;


	bubbleSort(aVec.begin(), aVec.end());

	//print sorted vector
	cout << "Sorted vector is " << endl;
	for (vector<int>::iterator it = aVec.begin(); it != aVec.end();it++) {
		cout << *it;
	}
	cout << endl << endl;

	//Display and sort list
	cout << "List before sorting " << endl;
	for (list<double>::iterator it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;


	bubbleSort(myList.begin(), myList.end());

	//print sorted list 
	cout << "Sorted list is " << endl;
	for (list<double>::iterator it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;

	//Display and sort circle vector

	cout << "Circle vector before sorting " << endl;
	for (vector<Circle>::iterator it = circleVec.begin(); it != circleVec.end(); it++) {
		cout << *it;
	}
	cout << endl << endl;


	bubbleSort(circleVec.begin(), circleVec.end());

	//print sorted vector
		cout << "Sorted circle vector is " << endl;
	for (vector<Circle>::iterator it = circleVec.begin(); it != circleVec.end(); it++) {
		cout << *it;
	}
	cout << endl;


	return 0;
}

