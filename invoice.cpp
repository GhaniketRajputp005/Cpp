#include<iostream>
using namespace std;

class invoice
{
    string partnumber,partdescription;
    double price_per_item;
    int quantity;

    public:
            invoice()
            {
                getline(cin,partnumber);
                getline(cin,partdescription);
                cin>>quantity>>price_per_item;
                if(quantity<0)
                {
                    quantity=0;
                }
                if(price_per_item<0)
                {
                    price_per_item=0;
                }
            }

            double getinvoiceamount()
            {
                double invoiceamount;
                invoiceamount = quantity*price_per_item;
                return invoiceamount;
            }

            void display()
            {
                cout<<partnumber<<endl<<partdescription<<endl<<quantity<<price_per_item<<endl;
            }
};

int main()
{
    invoice ob1;
    double invoiceamount;
    invoiceamount =  ob1.getinvoiceamount();
    ob1.display();
    cout<<invoiceamount;
    return 0;

}



