#include<iostream>
using namespace std;
class shape{
protected:
    float x;
public :
    void getData(){
    cin>>x;}
    virtual float calculateArea()=0;


};
class square : public shape
{
   public:
       float calculateArea()
       {

           return x*x;
       }

};
class circle : publis shape
{
public:
    float calculateArea()
    {

        return 3.14*x*x;
    }
};

