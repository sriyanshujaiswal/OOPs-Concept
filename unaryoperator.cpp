#include<iostream>
using namespace std;
class Integer{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata(){
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    Integer operator - (){
        Integer temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};

int main()
{
    Integer i1,i2;
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
    i1.setdata(3,4);
    i2=-i1;
    i1.showdata();
    i2.showdata();
    return 0;
}