#include<iostream>
using namespace std;


class academic
{
        protected:
        int m1,m2,m3;
    
                void getacademic()
                {

                    
                    cout<<"read academic info\n";
                    cin>>m1>>m2>>m3;

                }
                
                void display()
                {
                    cout<<"shown academic info\n";
                    cout<<m1<<m2<<m3;
                }
};

class extra
{
        protected:
            int sm , gp;
            void getsports()
            {
                    
                    cout<<"read sports and gp info\n";
                cin>>sm>>gp;
            }
            void display()
            {
                cout<<"sm and gp marks\n";
                cout<< sm << gp;
            }
};

class result:protected academic,public extra
{
    int total,roll;
    string name,dept;
    public:
        void gettotal()
        {
            
            total = m1+m2+m3+sm+gp;
        }
        void getinfo()
        {
            cout<<"enter student info\n";
                getline(cin,name);
                getline(cin,dept);
                cin>>roll;
                getacademic();
                getsports();
        }
        void final()
        {
           academic::display();
           extra::display();

        }
};

int main()
{
    result ob;
    ob.getinfo();
    ob.gettotal();
    ob.final();

    return 0;
}