#include<iostream>
using namespace std;

class Base
{
protected:
  int x;

public:
  void setData (int a)
  {
    x=3;
   }
  int getData ()
  {
   return x;
   }
};

class Derived: public Base
{
public:
   void display()
   {
    cout<<"value ="<<getData()<<endl;
    }
};
int main()
{
Derived d;
d.setData(10);
d.display();

return 0;
}
