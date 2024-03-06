#include<iostream>
using namespace std;
# define size 10

int difference(int *arr,int val){
    int ctr =0;
    for(int i=0;i<size;i++){
       int num =  arr[i]+val;
       for(int j=0;j<size;j++){
        if(arr[j]==num){
            ctr++;
        }
       }
    }
    return ctr;
}


int main()
{
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
       cout<< arr[i]<<" ";
    }
    int val=0;
    cout<<"enter value";
    cin>>val;

    int result = difference(arr,val);
    cout<<"number of pairs having differnce "<<val<<"are "<<result;
    
}