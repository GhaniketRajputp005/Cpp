#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
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
    int result = linearSearch(arr,n,key);
    if(result == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at index "<<result;
    }

}