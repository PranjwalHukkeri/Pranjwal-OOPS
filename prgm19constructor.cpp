#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called\n";
    }

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called\n";
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called\n";
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(101, "Pranjwal");
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}
