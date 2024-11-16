#include<iostream>
using namespace std;
class your;
class my
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fun();
};
int main()
{
    my m;

   m.a=10;
  m.b=10;
    m.c =10;
}

