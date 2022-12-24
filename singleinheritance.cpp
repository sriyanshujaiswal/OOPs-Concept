#include<iostream>
using namespace std;
class Sum{
    private:
    int a, b;
    public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata(){
        cout<<"a="<<a<<" b="<<b<<endl;
        cout<<"Sum="<<a+b<<endl;
    }
};
class Answer: public Sum{
    //public:
    //cout<<"Derived Class Call";
};

int main(){
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
    Sum s;
    Answer a;
    a.setdata(5,6);
    a.showdata();
    a.setdata(23,67);
    a.showdata();
    return 0;
}