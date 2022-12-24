#include<iostream>
using namespace std;
class Box
{
    private:
    int length;
    int breadth;
    int height;
    public:
    void setdata(int x, int y, int z)
    {
        length = x; 
        breadth = y;
        height = z;
    }
    void showdata()
    {
        cout<< "Length="<<length;
        cout<<endl;
        cout<<"Breadth="<<breadth;
        cout<<endl;
        cout<<"Height="<<height;
        cout<<endl;
    }
};
int main(){
    Box obj;
    obj.setdata(3,5,6);
    obj.showdata();
    return 0;
}