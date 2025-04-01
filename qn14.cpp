// Identify Logical Errors (2 Marks)
// Find and fix the logical errors in the following C++ code.

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }

private:
    int length;
    int breadth;
};

int main() {
    Rectangle r;
    cout << "Area: " << r.area() << endl;
    return 0;
}
