#include<iostream>
using namespace std;
int main()
{
    int n[5], maxi=0, maxdigit;
    cout<<"Enter the array elements=";
    for(int i=0; i<5; i++)
    {
        cin>>n[i];
    }
    for(int i=0; i<5; i++)
    {
        if(n[i]>maxi)
        {
            maxi=n[i];
        }
    }
    maxdigit=maxi;
    int seclarg=0;
    for(int i=0; i<5; i++)
    {
        if(n[i]!=maxdigit)
        {
            seclarg=max(seclarg,n[i]);
        }
    }
    cout<<"Second Largest digit="<<seclarg;
    return 0;
}