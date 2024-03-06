#include <iostream>
using namespace std;

class Temperature
{
protected:
    float temp;
public:
    void setTempData(float x)
    {
        temp = x; 
    }
    virtual void changetemp() = 0;
};

class Fahrenheit : public Temperature
{
public:
    float ctemp, ftemp;
    void changetemp()
    {
                    cout << "Enter temperature in Fahrenheit\n";
        cin >> ftemp;
        setTempData(ftemp);
        ctemp = 5.0 / 9 * (temp - 32);
        cout << "Converted Temperature in Celsius is : " << ctemp << endl;
    }
};
class Celsius : public Temperature
{
public:
    float ctemp, ftemp;
    void changetemp()
    {
        cout << "Enter temperature in Celsius\n";
        cin >> ctemp;
        setTempData(ctemp);
        ftemp = 9.0 / 5 * ctemp + 32;
        cout << "Converted Temperature in Fahrenheit is : " << ftemp << endl;
    }
};
int main()
{
    Temperature *ptr;
    Fahrenheit obf;
    Celsius obc;
    ptr = &obf;
    ptr->changetemp();
    ptr = &obc;
    ptr->changetemp();
    return 0;
}
