#include<iostream>
using namespace std;
template <typename U,typename T >
T great(U x,T y)
{
    T temp;
    temp =   x +  y ; 
   return temp;
}
int main()
{
   
    cout<< great(10.9,11);
   
}