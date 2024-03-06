#include<iostream>
#include<math.h>
using namespace std;
#define size 8
    
int jumpSearch(int *arr,int key){

    int start =0,end=sqrt(size);
    while(key>arr[end]&&start<size){
        start = end;
        end += sqrt(size);
        if(end >= size){
            end = size-1;
            cout<<"****"<<end<<"****";
            cout<<arr[end];
        }
    }

    for(int i =start;i<=end;i++){
        if(arr[i]==key)
        return i;
    }
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