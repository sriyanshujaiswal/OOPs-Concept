#include<iostream>
using namespace std;
class College{
    public:
    void Name(string S)
    {
        cout<<"Name:"<<S;
        cout<<endl;
    }
};
class Student: public College{
    public:
    void Mark(float m)
    {
        cout<<"Marks of Student:"<<m;
        cout<<endl;
    }
};
class Faculty: public College{
    public:
    void Salary(int s)
    {
        cout<<"Salary of faculty:"<<s<<endl;
    }
};
int main()
{
    cout<<"Name: Sriyansu Kumar\n";
    cout<<"Roll no.:21120100\n";
    College c;
    Student s;
    Faculty f;
    s.Name("Sriyanshu");
    s.Mark(97.5);
    f.Name("Vishal Sir");
    f.Salary(100000);
    return 0;
}