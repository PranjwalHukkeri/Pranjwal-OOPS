// write a c++ program to implement stactic variable count and display the results after incremanting for 3 objects.4
#include<iostream>
using namespace std;
class demo{
static int count;
public:
void getcount()
{
cout<<"count="<<++count;
}
};
int demo::count;
int main()
{
demo d1,d2,d3;
d1.getcount();
d2.getcount();
d3.getcount();
return 0;
}
