#include<iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"funofbase"<<endl;
    }
};
class derived:public base
{
    public:
    void fun()
    {
        cout<<"funofderived"<<endl;
    }
};
int main()
{
    derived d;
    d.fun();
}
