#include<iostream>
#include<string>
using namespace std;

int main(){
    
    //string s ="s","k","y"," ","t","h","e";

   // char s[8] = {'s','k','y','\0','t','h','e','\0'};

    string st = " sky the is blue ";

    int s = 0;
    int e = st.length()-1;

    while(s <= e)
    {
        swap(st[s++],st[e--]);
    }

    int begin = 0;
    int end;
    string temp = "";

    cout<<st.length()<<endl;

    for(int i = 0;i <= st.length()-1;i++)
    {
        
        if(st[i] == ' ' || st[i] ==  '\0')
        {
            end = i-1;
            for(int j = end; j >= begin;j--)
            {
                temp.push_back(st[j]);
            }
            begin = i;
        }
    }

    for(int i= 0; i < st.length() ; i++){
        cout<<st[i];
    }

    cout<<endl;

    for(int i = 0; i < temp.length();i++){
        cout<<temp[i];
    }
    return 0;
}