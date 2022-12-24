#include<iostream>
using namespace std;
void reversewords(string &s)
{ 
    int count=0;
    int st=0;
    int e=s.length()-1;
    while(st<e){
    if (st!=' ')
    {
        count++;
        int j=count;
      while(st<j)
      {
        swap(s[st++],s[j--]);
      }
    }
     
     if(st==' ')
     {
         count=0;
         cout<<" ";
         continue;
     }
    
   }
   cout<<s;
}
int main()
{
    string s;
    cout<<"Enter the String"<<endl;
    cin>>s;
    reversewords(s);
}

