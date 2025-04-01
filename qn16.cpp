// Modify the following code to ensure the derived class method is called using a base class pointer.

#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class" << endl; }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
