#include<iostream>
using namespace std;

class student
{
    private:
            int roll;
            string name,department;
    public:
            void getinfo()
            {
                cout<<"enter student info\n";
                getline(cin,name);
                getline(cin,department);
                cin>>roll;
            }
            void showinfo()
            {
                cout<<"student info is\n";
                cout<<name<<department<<roll;
            }
};

class academic:protected student
{
        protected:
        int m1,m2,m3;
    
                void getacademic()
                {

                    getinfo();
                    cout<<"read academic info\n";
                    cin>>m1>>m2>>m3;

                }
                void showacademics()
                {
                    showinfo();
                    cout<<"shown academic info\n";
                    cout<<m1<<m2<<m3;
                }
};

class sports:protected academic
{
        protected:
            int sp1,sp2,sp3;
            void getsports()
            {
                    getacademic();
                    cout<<"read sports info\n";
                cin>>sp1>>sp2>>sp3;
            }
};

class total:protected sports
{
    int total;
    public:
        void gettotal()
        {
            getsports();
            total = m1+m2+m3+sp1+sp2+sp3;
        }

        void display()
        {
            cout<<"final display\n";
            cout << total<<endl;
            showacademics();
          


        }
};

int main()
{
    total ob;
    ob.gettotal();
    ob.display();

    return 0;
}