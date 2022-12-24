#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start =0;
    int end=size-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}
int main (){
    int even[6]={2,4,5,6,8,10};

    int odd[5]={2,8,11,14,16};
    
    int index1=binarysearch(even,6,10);
    
    cout<<"Index of 10 is "<<index1<<endl;
    
    int index2=binarysearch(odd,4,14);
    
    cout<<"Index of 14 is "<<index2<<endl;
    
    return 0;
}
