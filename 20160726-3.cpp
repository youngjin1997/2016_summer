#include<iostream>
using namespace std;
class product
{
private:
    string name;
    double price;
    int quantity;
public:
    product(string n, double p, int q);
    ~product();
    void buy();
    void show_quantity();
    void update();
};
product::product(string n, double p, int q)
{
    name = n;
    price = p;
    quantity = q;
}
product::~product()
{
}
void product::buy()
{
    int num;
    cout<<"you want to buy:";
    cin>>num;
    if(num>quantity)
        cout<<"false"<<endl;
    else
        {
            quantity -= num;
            cout<<"all price:"<<price*num<<endl;
        }
}
void product::show_quantity()
{
    cout<<"name:"<<name<<endl;
    cout<<"now quantity:"<<quantity<<endl<<endl;
}
void product::update()
{
    int a;
    cout<<"add input positive,minus input negtive"<<endl;
    cout<<"update"<<name<<":";
    cin>>a;
    quantity += a;
}
int main()
{
    product la("latiao",0.5,999);
    la.show_quantity();
    la.buy();
    la.show_quantity();
    la.update();
    la.show_quantity();
    return 0;
}
