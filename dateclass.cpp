#include<iostream>
using namespace std;
class Date{
    public:
    int dd=00;
    int mm=00; 
    int yy=00;

    void ADD_DATE(int dd, int mm, int yy)
    {
        if((dd + this->dd)>30){
            this->mm += (this->dd+dd)/30;
        }
        if((mm + this->mm)>12){
            this->yy += (this->mm + mm)/12;
        }
        this->dd =(this->dd + dd)%30;
        this->mm =(this->mm + mm)%12;
        this->yy += yy;
    }
    void SHOW_DATE(){
        cout<<"Date=";
        if(dd==0)cout<<"00 / ";
        else cout<<dd<<" / ";
        if(mm==0)cout<<"00 / ";
        else cout<<mm<<" / ";
        if(yy==0)cout<<"00  ";
        else cout<<yy<<" " <<endl;
    }
};
int main(){
    Date OBJ;
    int dd,mm,yy;
    char ch='y';
    while(ch=='y'){
        cout<<"\n 1.SHOW DATE ";
        cout<<"\n 2.ADD DATE ";
        cout<<"\n 3.ADD AND SHOW DATE ";
        cout<<endl;
        int opt;    cin>>opt;
        switch (opt)
        {
            case 1 : {
                OBJ.SHOW_DATE();
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
                
            case 2: {
                cout<<"ENTER DATE (DATE MONTH YEAR) to ADD : ";
                cin>>dd>>mm>>yy;
                OBJ.ADD_DATE(dd,mm,yy);
                cout<<"\n GO TO MAIN MENU (Y/N) : ";
                cin>>ch;
                break;
            }
            case 3:{   cout<<"ENTER DATE (DATE MONTH YEAR) to ADD : ";
                cin>>dd>>mm>>yy;
                OBJ.ADD_DATE(dd,mm,yy);
                OBJ.SHOW_DATE();
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