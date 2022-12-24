#include<iostream>
using namespace std;
class A{
    public:
    class B
    {
        private:
        int num;
        public:
        void getdata(int n)
        {
            num=n;
        }
        void putdata()
        {
            cout<<"The Number is="<<num<<endl;
            cout<<endl;
        }
    };
};
int main()
{
    cout<<endl;
    cout<<"Nested classes in c++"<<endl;
    A::B obj;
    obj. getdata(9);
    obj. putdata();
    return 0;   
}