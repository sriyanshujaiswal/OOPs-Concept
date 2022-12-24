#include<iostream>
using namespace std;
class Rocket
{
    private:
    /*Coordinates */
    int x=0; 
    int y=0;
    int distance=0;
    public:
    void change_position(int dist,int a, int b)
    {
        distance=dist;
        x=a;
        y=b;
    }
    void getposition()
    {
        cout<<endl;
        cout<<"Distance:"<<distance;
        cout<<"\nNew Location:"<<"("<<x<<","<<y<<")";
        cout<<endl;
    }
};
int main()
{
    Rocket r;
    char ch;
    int y1=0;
    int dist=0;
    cout<<"\n U for Up";
    cout<<"\n D for Down";
    cout<<"\n L for Left";
    cout<<"\n R for Right";
    cout<<"\nEnter the Direction:";
    cin>>ch;
    switch (ch)
    {
    case 'U':
        cout<<"Enter the new position:";
        cin>>y1;
        cout<<"\nDistance:";
        cin>>dist;
        r.change_position(dist,0,y1);
        break;
    case 'D':
        cout<<"Enter the new position:";
        cin>>y1;
        cout<<"\nDistance:";
        cin>>dist;
        r.change_position(dist,0,y1);
        break;
    case 'L':
        cout<<"Enter the new position:";
        cin>>y1;
        cout<<"\nDistance:";
        cin>>dist;
        r.change_position(dist,y1,0);
        break;
    case 'R':
        cout<<"Enter the new position:";
        cin>>y1;
        cout<<"\nDistance:";
        cin>>dist;
        r.change_position(dist,y1,0);
        break;
    default:
        r.change_position(0,0,0);
        break;
    }
    r.getposition();
    return 0;

}