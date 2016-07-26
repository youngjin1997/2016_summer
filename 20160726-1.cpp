#include<iostream>
using namespace std;
class triangle
{
private:
    double a,b,c;
public:
    triangle(double aa,double bb,double cc);
    ~triangle();
    void judge_triangle();
    void judge_right();
    double area();
};
triangle::triangle(double aa,double bb,double cc)
{
    a = aa;
    b = bb;
    c = cc;
}
triangle::~triangle()
{

}
void triangle::judge_triangle()
{
    if((a+b>c)&&(a+c>b)&&(b+c>a)&&a>0&&b>0&&c>0)
        cout<<"this is a triangle!"<<endl;
    else
        cout<<"this is not a triangle!"<<endl;
}
void triangle::judge_right()
{
    if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
        cout<<"this is a right triangle!"<<endl;
    else
        cout<<"this is not a right triangle!"<<endl;
}
int main()
{
    triangle aaa(3,4,5);
    aaa.judge_triangle();
    aaa.judge_right();
    triangle bbb(6,6,6);
    bbb.judge_triangle();
    bbb.judge_right();
    triangle ccc(1,10,13);
    ccc.judge_triangle();
    ccc.judge_right();
    return 0;
}
