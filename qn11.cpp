// The following C++ program contains errors. 
// Identify and correct them.

#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string n, int a) {
        name = n;
        age = a;
    }
    void speak() {
        cout << "This animal makes a sound." << endl;
    }

private:
    string name;
    int age;
};

int main() {
    Animal dog("Buddy", 3);
    cout << "Animal name: " << dog.name << endl;
    return 0;
}
