#include<iostream>
using namespace std;
class Student
{
public:
int id;
string name;

void display()
{
cout<<"ID:"<<id<<endl;
cout<<"NAME:"<<name<<endl;
}
};
int main()
{
    Student s1,s2;

    s1.id=101;
    s1.name="Rahul";
    s2.id=102;
    s2.name="Rohan";
    s1.display();
    s2.display();
    return 0;
}
