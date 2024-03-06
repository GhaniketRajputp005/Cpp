#include<iostream>
using namespace std;


class student
{
    protected:
        string name;
        int age,rollno;
        void getinfo()
        {
            cout<<"enter personal info\n";
            getline(cin,name);
            cin>>age>>rollno;
        }
};

class academics:virtual protected student
{
    protected:
        int m1,m2,m3;
        void getacademic()
        {
            cout<<"enter academic marks\n";
            cin>>m1>>m2>>m3;
        }
};

class sports: virtual protected student
{
    protected:
        int sp1,sp2,sp3;
        void getsports()
        {
            cout << "enter sports marks\n";
            cin>>sp1>>sp2>>sp3;
        }
};

class final:protected academics,protected sports
{
    private:
    int total;
    public:
        void totalmarks()
        {
            getinfo();
            getacademic();
            getsports();
            total = m1+m2+m3+sp1+sp2+sp3;

        }
        void display()
        {
            
            cout<<total<<endl<<name<<endl<<rollno<<age;
        }
};

int main()
{
    final ob;
    ob.totalmarks();
    ob.display();

    return 0;

}