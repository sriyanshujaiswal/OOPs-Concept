#include<iostream>
using namespace std;
int maxdigit(int n)
{
     int maxi=0, num;
     int x=n;
    while(n!=0)
    {
        num=n%10;
        n=n/10;
        maxi=max(maxi, num);
    }
    return maxi;
}
int smalldigit(int n)
{
    int small=10;
    int num;
    int x=n;
     while(n!=0)
    {
        num=n%10;
        n=n/10;
        if(num<small)
        {
            small=num;
        }
    }
    return small;
}
int main()
{
    int n;
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
    cout<<"Enter the Number=";
    cin>>n;
    cout<<"Max digit="<<maxdigit(n);
    cout<<endl;
    cout<<"Smallest digit="<<smalldigit(n);
    return 0;
}