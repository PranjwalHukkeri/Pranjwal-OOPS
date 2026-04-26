#include<iostream>
using namespace std;
class Base
{
private:
int z;
public:
void setData(int a)
{
z=2;

}
int getData()
{
return z;
}
};
class Derived:public Base
{
public:
void display()
{
cout<<"Value="<<getData()<<endl;

}
};
int main()
{
Derived d;
d.setData(10);
d.display();
}
