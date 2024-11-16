#include<iostream>
using namespace std;
int main()
{
    int A[3]={4,5,6};
    int *p=A;
    
    cout<<*p<<endl;
    cout<<endl;
    p++;
    cout<<*p<<endl;
    cout<<endl;

    return 0;

}

