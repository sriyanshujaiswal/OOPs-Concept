#include<iostream>
using namespace std;
class Integer{
    private:
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl;
    }
    Integer operator ++(){        //operator overloading 
        cout<<"Overloading"<<endl;
        Integer temp;
        temp.a = ++a;
        return temp;
    }
};

int main(){
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
    Integer i1 , i2;
    i1. setdata(6);
    i1.showdata();
    i2=++i1;
    i2.showdata();
    return 0;
}