#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    A(int x)
    {cout<<"a called\n";
    a=x;
    cout<<a;
    }
    ~A()
    {
        cout<<"A's destructor\n";
    }
};

class B:public A
{
    int b;
    public:
         B(int x,int y):A(x)
         {
            b=y;
            cout<<y<<endl;
         }
         ~B()
         {
            cout<<"B's destructor\n";
         }
};

int main()
{
    B ob(100,200);
    return 0;
}

