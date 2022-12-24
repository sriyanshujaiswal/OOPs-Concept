#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no.:";
    cin>>n;
    int x=n;
    int digit,reverse=0;
    while(n>0){
        digit=n%10;
        reverse=digit+(reverse*10);
        n=n/10;
    }
    if(x==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;

} 
