#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a= a + c.a;
        temp.b= b + c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
    c1.setdata(5,6);
    c2.setdata(6,7);
    c3=c1.add(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}