#include<iostream>
using namespace std;

void toh(int n,char s,char a,char d){
    if(n==0){ return ;} // if there are no discs left

        toh(n-1,s,d,a);  // source -> auxiliary via destination.
        cout<<s<<" -> "<<d<<endl;  //  assuming that disc is moved from source to destination
        toh(n-1,a,s,d); //auxiliary-> destination via source
    
}

int main(){
    cout<<"enter number of discs";
    int n;
    cin>>n;
    char s='s',a='a',d='d';
    toh(n,s,a,d);
}