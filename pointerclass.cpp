# include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1;
    rectangle*ptr=new rectangle();
    ptr=&r1;
    r1.length=30;
    ptr->length=45;
    ptr->breadth=12;
    cout<<ptr->area()<<endl;

}
