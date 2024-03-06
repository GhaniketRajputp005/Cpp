#include<iostream>
#include<math.h>
using namespace std;
#define size 8

int binarySearch(int *arr,int key,int start,int end){
    while(start<=end){
        int mid =start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else
        end=mid-1;
    }
    return -1;
}
    
int jumpSearch(int *arr,int key){

    int start =0,i=1,end=pow(2,i);
    while(key>arr[end]&&start<size){
        start = end; 
        end = pow(2,++i);
        if(end >= size){
            end = size-1;       
        }
    }

   int result= binarySearch(arr,key,start,end);
   if(result!=-1)
    return result;
    else
    return -1;

}

int main(){
    int arr[size];
    cout<<"array must be sorted\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int key=0;
    cout<<"enter key";
    cin>>key;
    int result = jumpSearch(arr,key);
    if(result!=-1){
        cout<<"match found at index "<<result;
    }
    else
         cout<<"match not found";
}