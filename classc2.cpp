#include<iostream>
using namespace std;
class Car
{
public:
int speed;
string Name;

void display()
{
cout<<"Speed:"<<speed<< "km/h"<<endl;
cout<<"NAME:"<<Name<<endl;
}
};
int main()
{
    Car s1,s2;

    s1.speed=220;
    s1.Name="Porsche";
    s2.speed=103;
    s2.Name="Benz";
    s1.display();
    s2.display();
    return 0;
}
