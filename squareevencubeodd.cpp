#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int square, cube;
    cout<<"Enter the 10 elements in array";
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            square=arr[i]*arr[i];
            cout<<"Square of even elements="<<square<<" ";
            cout<<endl;
        }
        else{
            cube=arr[i]*arr[i]*arr[i];
            cout<<"Cube of odd elements"<<cube<< " ";
            cout<<endl;
        }
    }
        cout<<endl;
        return 0;
}