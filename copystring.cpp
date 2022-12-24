#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20], s2[20];
    cout<<"Enter first string:";
    cin.getline(s1,20);
    cout<<"Enter second strings:";
    cin.getline(s2,20);
    strcat(s2," ");
    strcat(s1, s2);
    cout<<"Concatened string is:"<<s1<<endl;
    return 0;   
}