#include<iostream>
using namespace std;
class Car{
public:
    string brand;
    string model; 
    int year;
    Car(string x, string y ,int z) //constructor
    {
        brand=x;
        model=y;
        year=z;
    }
};
int main()
{
    Car Carobj1("BMW", "X5", 1995); //constructor calling
    Car Carobj2("Ford", "Mustang", 1969); //constructor calling
    cout<<Carobj1.brand<<endl<<" "<<Carobj1.model<<endl<<"  "<< Carobj1.year<<endl;
    cout<<Carobj2.brand<<endl<<" "<< Carobj2.model<<endl<<"  "<<Carobj2.year<<endl;
    return 0; 
}