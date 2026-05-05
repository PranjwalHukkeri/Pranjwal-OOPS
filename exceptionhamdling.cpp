//write a c++ program to read roll no ,name,age (should be greater than 18) and subject marks of student and implement suitable exception handling method to validate input
#include<iostream>
#include <stdexcept>
using namespace std;
int main(){
    int age,rollno;
    float  marks;
    string name;
    try{
        cout<<"Enter Roll no"<<endl;
        cin>>rollno;
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter age";
        cin>>age;
        if(age<18)
            throw age;
        cout<<"Enter marks :"<<endl;
        cin>>marks;
        if(marks<0 || marks>100)
            throw marks;
        cout << "\nValid Data Entered!" << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
    catch(int a){
        cout << "You must be at least 18 years old." << endl;
    }
    catch(float m){
        cout<<"Marks should be between 0 and 100 to be valid"<<endl;
    }
}
