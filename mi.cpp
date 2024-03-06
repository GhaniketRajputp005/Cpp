#include <iostream>
using namespace std;

class savingsaccount
{
private:
    float savingsbalance;
    static float  annualinterestrate;
public:
    void setdata(float x)
    {
        savingsbalance=x;
    }
   void calculatemonthlyinterest()
   {
    float interest;
    interest = savingsbalance*annualinterestrate/12;
    savingsbalance= savingsbalance+interest;
   }

    static void modifyinterestrate(float x)
    {
        annualinterestrate = x;

    }

   void display()
   {
    cout<<savingsbalance<<endl;
   }
};
float savingsaccount:: annualinterestrate;


int main()
{
    savingsaccount saver1,saver2;
    savingsaccount::modifyinterestrate(0.04);
    saver1.setdata(2000);
    saver2.setdata(3000);
    saver1.display();
    saver2.display();
    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();
    saver1.display();
    saver2.display();
    savingsaccount::modifyinterestrate(0.05);
    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();
    saver1.display();
    saver2.display();

    
    return 0;
}
