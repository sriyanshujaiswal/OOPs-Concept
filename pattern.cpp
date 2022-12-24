#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Name= Sriyanshu Kumar";
    cout<<"Roll= 21120100";
    cout<<"Enter the No=";
    cin>>n;
    int i=0;    
    while(i<=n/2)
    {
        int j=1;
        while(j<=i)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    while(i>n/2 && i<n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
   
}