//Write a c++ program using this pointer
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Constructor
    Student(int id) {
        // Using 'this' pointer to resolve naming conflict
        this->id = id;
    }

    void display() {
        cout << "Student ID: " << this->id << endl;
    }

    void compare(Student s) {
        if (this->id == s.id) {
            cout << "Both students have the same ID." << endl;
        } else {
            cout << "Students have different IDs." << endl;
        }
    }
};

int main() {
    Student s1(101);
    Student s2(102);

    s1.display();
    s2.display();

    s1.compare(s2);

    return 0;
}
