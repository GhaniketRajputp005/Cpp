#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int i,int key){
       if(n==i){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    else{
        return linearSearch(arr,n,i+1,key);
    }

}

int main(){
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    int result = linearSearch(arr,n,0,key);
    if(result == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at index "<<result;
    }

}