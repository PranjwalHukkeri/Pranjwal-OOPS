#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;
    float area;

public:
    void display()
    {
        cout << "Enter length and width of rectangle" << endl;
        cin >> length >> width;
        area = length * width;
        cout << "Area = " << area << endl;
    }
};

int main()
{
    rectangle r;
    r.display();
    return 0;
}
