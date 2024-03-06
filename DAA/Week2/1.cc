#include<iostream>
# define size 10
using namespace std;

int binarySearch(int *arr,int key){
    int left = 0,right =size-1,mid=0,index=-1,ctr=-1;
    while(left<=right){
        mid = left+(right-left)/2;
        if(arr[mid]==key){
             index=mid;
             ctr=1;
             break;
        }
        else if(key>arr[mid]){
            left=mid+1;
        }
        else
        right=mid-1;
    }
    if(index==-1)
    return -1;
    for(int temp = index-1;arr[temp]==arr[index];temp--){
        ctr++;
    }
    for(int temp = index+1;arr[temp]==arr[index];temp++){
        ctr++;
    }
    return ctr;

}


int main(){
    int arr[size];
    cout<<"array must be sorted\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key=0;
    cout<<"enter key";
    cin>>key;
    int result = binarySearch(arr,key);
    if(result!=-1){
        cout<<"match found and duplicates in number are "<<result;
    }
    else
         cout<<"match not found";


}