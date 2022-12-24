#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s, int e, int k)
{
    if(s>e)
    {
        return false;
    }
    int mid= s + (e-s)/2;
    if (arr[mid]==k)
    {
        return true;
    }
    if (arr[mid]>k)
    {
        return binarysearch(arr, s, mid-1, k);
    }
    else
    {
        return binarysearch(arr, mid+1, e, k);
    }
}
int main()
{
    int arr[6]={2,4,5,10,14,16};
    int size=6;
    int key=3;

    if(binarysearch(arr,0,5,3))
    {
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }

    return 0;
}

