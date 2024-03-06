#include<iostream>
# define size 10
using namespace std;

int binarySearch(int *arr,int key){
    int left = 0,right =size-1,mid=0;
    while(left<=right){
        mid = left+(right-left)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            left=mid+1;
        }
        else
        right=mid-1;
    }
    return -1;

}


int main(){
    int arr[size];
    cout<<"array must be sorted\n";
    for(int i=0;i<size;i++){
        arr[i]=i+1;
    }
    int key=0;
    cout<<"enter key";
    cin>>key;
    int result = binarySearch(arr,key);
    if(result!=-1){
        cout<<"match found at index "<<result;
    }
    else
         cout<<"match not found";


}