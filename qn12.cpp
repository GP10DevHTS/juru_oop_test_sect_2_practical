
// What will be the output of the following code? 
// Predict and explain.

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}