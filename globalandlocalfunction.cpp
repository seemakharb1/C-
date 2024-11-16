#include<iostream>
using namespace std;
int g=20; void fun()
{
    int a=10;
    a++;
    g++;
    cout<<a<<" "<<g<<endl;
}
int main()
{
    cout<<g;
    fun();
    cout<<g<<endl;
    
}
