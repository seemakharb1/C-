#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area();
    virtual void perimeter();
};
class rectangle:public shape
{
    private:
    float length;
    float breadth;
    public:
    rectangle(int l=1,int b=1){length=1;breadth=1;}
    float area(){return length*breadth;}
    float perimeter(){return 2*(length+breadth);}
};
class circle:public shape
{
    private:
    float radius;
    public:
    circle(float r){radius=r;}
    float area(){return 3.1425*radius*radius;}
    float perimeter(){return 2*3.1425*radius;}
};
int main()
{
    shape*s=new rectangle(10,5);
    cout<<"area of rectangle"<<endl;
    cout<<"perimeter of rectangle"<<endl;
    //s= new circle(10);
    //cout<<"area of circle"<<s-> area()<<endl;
    //cout<<"perimeter of circle"<<s-> perimeter()<<endl;
}
