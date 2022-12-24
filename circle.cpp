#include<iostream>
using namespace std;
class circle
{
    private:
    int radius;
    public:
    void setdata(int r)
    {
        radius = r;
    }
    void area()
    {
        float area = 3.14*(radius*radius);
        cout<<endl;
        cout<<"Area of Circle="<<area;
        cout<<endl; 
    }
    void circumference()
    {
        float cir=2*3.14*radius;
        cout<<endl;
        cout<<"Circumference of circle="<<cir;
        cout<<endl;
        cout<<endl;
    }
};
int main()
{
    circle c1;
    c1.setdata(5);
    c1.area();
    c1.circumference();
    return 0;
}