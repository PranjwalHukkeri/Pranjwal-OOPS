#include<iostream>
using namespace std;
class vehicle
{
public:
int speed;
void showspeed()
{
cout<<"speed="<<speed<<endl;
}
};
class car:public vehicle{
public:
     string brand;
};
int main()
{
car c1,c2;
c1.brand="Toyota";
c1.speed=120 ;
c1.showspeed();
cout<<"Brand:"<<c1.brand<<endl;
c2.brand="Porsche";
c2.speed=220 ;
c2.showspeed();
cout<<"Brand:"<<c2.brand<<endl;
return 0;
}
