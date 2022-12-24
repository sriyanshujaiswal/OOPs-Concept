#include<iostream>
using namespace std;

// Base class A
class A
{
	public:
		A()                    //constructor
		{
			int a = 5, b = 6, c;
			c = a + b;
			cout << "Sum is:" <<c << endl;
		}
};

// Class B
class B: public A
{
	public:
		B()                     //constructor
		{
			int d = 50,e = 35, f;
			f = d - e;
			cout << "Difference is:" <<f << endl;
		}
};

// Derived class C
class C: public B
{
	public:
		C()                     //constructor
		{
			int g = 10, h = 20, i;
			i = g * h;
			cout << "Product is:" <<i << endl;			
		}
};

// Driver code
int main()
{
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
	C obj;
	return 0;
}
