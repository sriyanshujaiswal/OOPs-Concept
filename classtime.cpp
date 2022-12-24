#include<iostream>
using namespace std;
class TIME
{
    public:
    int HH=00,MM=00,SS=00;
    void ADD_TIME(int H,int M,int S){
        if((MM + M ) >=60){
            HH += (M+MM)/60;
        }
        if((SS + S) >= 60){
            MM += (SS+S)/60;
        }
        MM = (MM + M)%60;
        SS = (SS + S)%60;
        HH += H ;
    }
    void SHOW_TIME(){
        cout<<" TIME = "; 
        if(HH==0) cout<<"00 : ";
        else cout<<HH<<" : ";
        if(MM==0) cout<<"00 : ";
        else cout<<MM<<" : ";
        if(SS==0) cout<<"00 ";
        else cout<<SS<<" "<<endl;
    }
};
int main(){
    TIME obj1;
    obj1.ADD_TIME(0,0,0);
    obj1.ADD_TIME(2,33,54);
    obj1.ADD_TIME(1,42,13);
    obj1.SHOW_TIME();
    return 0; 
}
