#include<iostream>
using namespace std;
class basicCar
{
    public:
    virtual void start(){cout<<"basicCarstarted"<<endl;}
};
class advanceCar:public basicCar
{
    public:
    void start(){cout<<"advanceCarstarted"<<endl;}
};
int main()
{
    basicCar*p=new advanceCar();
    p->start();
}
