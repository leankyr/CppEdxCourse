#include <new>
#include <iostream>

using namespace std;

//Allocator class
class MyNewDeleteAllocator {
public:
    MyNewDeleteAllocator() {}
    ~MyNewDeleteAllocator() {}
		// std::size_t can store the maximum size of a theoretically possible object of any type (including array)
    static void* operator new (size_t size); 
    static void operator delete (void *p);
};

void* MyNewDeleteAllocator::operator new (size_t size){
    void *p;
    p = malloc(size);
    if (p == NULL) {
        //Throw bad_alloc.
        std::bad_alloc exception;
        throw exception;
    }
    cout << "MyNewDeleteAllocator::operator new called with size_t " << size << endl;
    return p;
}

void MyNewDeleteAllocator::operator delete (void *p){
    cout << "MyNewDeleteAllocator::operator delete called. " << endl;
    delete[] p;
}


int main()
{
    MyNewDeleteAllocator *p = new MyNewDeleteAllocator; //Create MyNewDeleteAllocator object.

    delete p; //Delete MyNewDeleteAllocator object.

    return 0;
}
