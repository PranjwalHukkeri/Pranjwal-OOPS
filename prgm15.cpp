#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    // Constructor with default values
    Rectangle(float l = 5, float b = 4)
    {
        length = l;
        breadth = b;
    }

    float calculateArea()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    float l, b;

    cout << "Enter length and breadth (enter 0 0 for default): ";
    cin >> l >> b;

    Rectangle r;

    if (l == 0 && b == 0)
    {
        r = Rectangle();            // uses default values (5,4)
    }
    else
    {
        r = Rectangle(l, b);        // uses user input
    }

    r.display();

    return 0;
}
