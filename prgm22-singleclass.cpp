#include <iostream>
using namespace std;

// Base class
class A {
public:
    int x;
};

// Public Inheritance
class B : public A {
public:
    void show() {
        x = 10;
        cout << "Public Inheritance x = " << x << endl;
    }
};

// Protected Inheritance
class C : protected A {
public:
    void show() {
        x = 20;
        cout << "Protected Inheritance x = " << x << endl;
    }
};

// Private Inheritance
class D : private A {
public:
    void show() {
        x = 30;
        cout << "Private Inheritance x = " << x << endl;
    }
};

int main() {
    B b;
    b.show();

    C c;
    c.show();

    D d;
    d.show();

    return 0;
}s
