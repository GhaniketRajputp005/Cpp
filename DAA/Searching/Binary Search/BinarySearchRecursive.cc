#include<iostream>
# define size 10
using namespace std;

int binarySearch(int *arr,int key,int left,int right){
    int mid =left+(right-left)/2;
    if(left>right)
        return -1;
    
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid])
        return binarySearch(arr,key,mid+1,right);
    else    
        return binarySearch(arr,key,left,mid-1);
    

}


int main(){
    int arr[size];
    cout<<"array must be sorted\n";
    for(int i=0;i<size;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int key=0;
    cout<<"enter key";
    cin>>key;
    int result = binarySearch(arr,key,0,size);
    if(result!=-1){
        cout<<"match found at index "<<result;
    }
    else
         cout<<"match not found";


}