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

void sum(int arr[]){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]==arr[k])
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
           }

        }
    }
}


int main(){
    int arr[size];
    cout<<"array must be sorted\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    sum(arr);

}