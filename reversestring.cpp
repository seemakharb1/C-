#include<iostream>
using namespace std;
int main()
{
    string str = "SEEMA";
    string rev="AMEES";
    int len=(int)str.length();
    rev.resize(len);
    for(int i=0;str[i]!='\0';i++)
    cout<<rev<<endl;
    return 0;

}
