#include<iostream>
#include<string.h>
using namespace std;
int  main()
{
    string s1, s2;
    cout<<"Enter the first string:";
    cin>>s1;
    cout<<"Enter the second string:";
    cin>>s2;
    if (s1==s2)
    {
        cout<<"Both are the same string";
    }
    else 
    {
        cout<<"Both string are different"; 
    }
    return 0;
}
