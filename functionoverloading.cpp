#include<iostream>
using namespace std;

void add(int a, double b)
{
	cout<<endl;
    cout<<"sum = "<<(a+b);
}

void add(double a, int b)
{
	cout<<endl<<"sum = "<<(a+b);
    cout<<endl;
    cout<<endl;
}

// Driver code
int main()
{
	add(10,2.5);
	add(5.5,6);

	return 0;
}
