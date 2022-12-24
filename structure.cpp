#include <iostream>
using namespace std;

struct Point {
	int x = 0; 
	int y = 1;
};

int main()
{
	struct Point p1;
	cout<<"Name : Sriyanshu Kumar\n";
	cout<<"Roll No. : 21120100\n";

	cout << "x = " << p1.x << ", y = " << p1.y<<endl;


	p1.y = 20;
	cout << "x = " << p1.x << ", y = " << p1.y;
    cout<<endl;
	return 0;
}

