#include<iostream>
using namespace std;
class Address
{
private:
    string name;
    string city;
    string street;
    int post;
public:
    Address(string n,string c,string s,int p);
    ~Address();
    void ChangeName();
    void Display();
};
Address::Address(string n,string c,string s,int p)
{
    name = n;
    city = c;
    street = s;
    post = p;
}
Address::~Address()
{

}
void Address::ChangeName()
{
    cout<<"Change the name into:";
    string nn;
    cin>>nn;
    name = nn;
}
void Address::Display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"City:"<<city<<endl;
    cout<<"Sreet:"<<street<<endl;
    cout<<"Post Code:"<<post<<endl;
}
int main()
{
    Address sut("jpy", "Shenyang", "Xingshun", 116021);
    sut.Display();
    sut.ChangeName();
    cout<<endl;
    sut.Display();
    return 0;
}
