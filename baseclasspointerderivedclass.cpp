#include<iostream>
using namespace std;
class rectangle
{
    void area()
    {
        cout<<"areaofrectangle"<<endl;
    }
};
class cuboid:public rectangle
{
    void volume()
    {
        cout<<"cuboidvolume"<<endl;
    }
};
int main()
{
    rectangle r;
    cuboid*q=&r;

    cuboid c;
    //c.area();
   // c.volume();

    return 0;
}
