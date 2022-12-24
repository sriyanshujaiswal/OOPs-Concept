
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxi=0, num;
    cout<<"Enter the Number=";
    cin>>n;
    int x=n;
    while(n>0)
    {
        num=n%10;
        n=n/10;
        maxi=max(maxi, num);
    }
    int sl=0;
    num=0;
    while (x>0)
    {
        num=x%10;
        x=x/10;
        if(num!=maxi)
        {
            sl=max(sl,num);
        }
    }
   cout<<"Second Max digit="<<sl;
    return 0;
}