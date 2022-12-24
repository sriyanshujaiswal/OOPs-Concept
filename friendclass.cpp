#include<iostream>
using namespace std;
class A{
    private:
    int a, b;
    public:
     void setdata(int x, int y)
     {
        a=x;
        b=y;
     }
    friend class B;
};

class B{
    public:
     void showdata(A t)
     {
        cout<<"a="<<t.a<<"\nb="<<t.b;
     }
};

int main()
{
    A t1;
    B t2;
    t1.setdata(9,10);
    t2.showdata(t1);

}