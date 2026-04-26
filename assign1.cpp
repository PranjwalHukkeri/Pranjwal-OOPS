#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string str;
str.assign("Hello, World!");
cout<<str<<endl;
str.assign("Hello,Universe !",7,0);
cout<<str<<endl;
string other="C++ Programming";
str.assign(other,4,11);
cout<<str<<endl;
return 0;
}
