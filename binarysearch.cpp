#include<iostream>
using namespace std;
int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
    int l=0,h=9,key, mid;
    cout<<"enter the key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"found at"<<mid;
            return 0;
        }
        else if(key<A[mid])
        h=mid-l;
        else
        l= mid+l;

    }
    cout<<"not found";
    return 0;
}
