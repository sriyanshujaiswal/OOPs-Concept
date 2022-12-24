#include<iostream>
using namespace std;
int digit(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int num, i, mul=1, n=0;
    int x;
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100";
    cout<<"\n Enter the No.";
    cin>>num;
    int power=digit(num);
    x=num;
    while(num>0)
    {
        mul=1;
        i=num%10;
        for(int j=0; j<power; j++)
        {
            mul=i*mul;
        }
        n=mul+n;
        num=num/10;
        
    }
    if (n==x)
    {
        cout<<x<<" is an Armstrong Number.";
    }
    else 
    cout<<x<<" is not an Armstrong Number.";
    return 0;
    }