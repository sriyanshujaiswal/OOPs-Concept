#include<iostream>
using namespace std;
void pswap(int a, int b )
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a << " "<< "b="<<b;
}

int main()
{
    int a, b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    pswap(a,b);
    return 0;
}