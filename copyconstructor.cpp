#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
        Complex(int x, int y)
        {
         a=x;
         b=y;
         cout<<"Constructor 2 Parameter"<<"\n a="<<a<<"b="<<b<<endl;
        }
        Complex(int x)
        {
            a=x;
            cout<<"Constructor 1 Parameter\n"<<"a="<<a<<endl;
        }
        Complex(){
            cout<<"Constructor 0 Parameter\n ";
        }
        Complex(Complex &c){
            cout<<"Copy Constructor";
            a=c.a;
            b=c.b;
            cout<<"\na="<<a<<"b="<<b;
        }

};
int main()
{
    Complex c1(5,6),c2(10), c3(11,12);
    Complex c4;
    Complex c5(c1);
    return 0; 
}