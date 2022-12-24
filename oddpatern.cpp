#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the No.=";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i+1; j++)
        {
            if (j%2!=0)
            {
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
    cout<<endl;
    }
}