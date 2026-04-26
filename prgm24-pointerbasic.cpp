//just like pointers to normal variables and functions, we can have pointers to class members
#include<iostream>
using namespace std;
class ABC{
public:
int a=50;
};
int main(){
ABC ob1;
ABC *ptr;
ptr=&ob1;
cout<<ob1.a<<endl;
cout<<ptr->a; //accesing member of a class given aptr to an object.use -> operator instead of dit
}
