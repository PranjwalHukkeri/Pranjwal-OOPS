#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    int x;
};

// Base class 2
class B {
public:
    int y;
};

// Derived class (inherits from A and B)
class C : public A, public B {
public:
    void show() {
        x = 10;
        y = 20;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "Sum = " << x + y << endl;
    }
};

int main() {
    C obj;
    obj.show();
    return 0;
}
