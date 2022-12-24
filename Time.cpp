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
    TIME OBJ;
    int h,m,s;
    char ch='y';
    while(ch=='y'){
        cout<<"\n 1.SHOW TIME ";
        cout<<"\n 2.ADD TIME ";
        cout<<"\n 3.ADD AND SHOW TIME ";
        cout<<endl;
        int opt;    cin>>opt;
        switch (opt)
        {
            case 1 : {
                OBJ.SHOW_TIME();
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
                
            case 2: {
                cout<<"ENTER TIME (Hour Minutes Seconds) to ADD : ";
                cin>>h>>m>>s;
                OBJ.ADD_TIME(h,m,s);
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
            case 3:{   cout<<"ENTER TIME (Hour Minutes Seconds) to ADD : ";
                cin>>h>>m>>s;
                OBJ.ADD_TIME(h,m,s);
                OBJ.SHOW_TIME();
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
            default: {
                cout<<"\n INVALID CHOICE ! ";
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
        }
    }
    return 0;
}