#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

int main()
{
    cout<<"Name= Sriyanshu Kumar\n";
    cout<<"Roll= 21120100\n";
	base *bptr;
	derived d;
	bptr = &d;


	bptr->print();

	
	bptr->show();
	
	return 0;
}
