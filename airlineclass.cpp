#include<iostream>
using namespace std;
class Airline
{
private:
    int flightnumber;
    string destination;
    float distance;
    float fuel; 

public:
    void feedinfo(int a, string b, float c)
    {
        a = flightnumber;
        b = destination;
        c = distance;
    }
    void showinfo()
    {
        cout<<"flight Number="<<flightnumber;
        cout<<"\n destination="<<destination;
        cout<<"\n distance="<<distance;
    }
    void calfuel(float distance)
{
    if(distance<=1000)
    {  
       cout<<"\nFuel = 500"; 
    }
    else if (distance>1000 && distance<=2000)
    {
        cout<<"\nFuel=1100";
    }
    else
    {
        cout<<"\nFuel=2200";
    }
}

};

int main()
{
    Airline obj;
    string y;
    cout<<"Enter the destination=";
    cin>>y;
    obj.feedinfo(12038, y, 1200.67);
    obj.showinfo();
    obj.calfuel(1200.67);
    return 0;
}

