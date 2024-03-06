#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>my_array;
    vector<int>::iterator p;
    cout<<"enter number of elements \n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        my_array.push_back(i);
    }
    for(p= my_array.begin();p!=my_array.end();p++)
    cout<<*p<<endl;


}