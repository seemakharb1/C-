#include<iostream>
#include<string>
using namespace std;
class book
{
    private:
    string title;
    string author;
    int publication year;
    float price;
    public:
    void settitle(int t)
    {
        title=t;

    }
    void setauthor(int a)
    {
        author=a;
    }
    void setpublisheryear(int py)
    {
        publisheryear=py;
    }
    void setprice(int p)
    {
        price=p;
    }
    int gettitle()
    {
        return title;
    }
    int getauthor()
    {
        return author;
    }
    int getpublisher()
    {
        return publisher;
    }
    int getprice()
    {
        return price;
    }
};
int main()
{
    book b1;
    b1.settitle(c++);
    b1.setauthor(bjarne stroustrup);
    b1.setpublisheryear(2018);
    b1.setpricef(39.90$);
    cout<<"settitle:"<<title<<endl;
    cout<<"setpublicationyear:"<<publicationyear<<endl;
    cout<<"setauthor"<<author<<endl;
    cout<<"setprice"<<price<<endl;
}


