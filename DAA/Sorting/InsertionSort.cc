#include<iostream>
using namespace std;
#define size 10

void insertionSort(int arr[]){

    int temp,j;
    for(int i=1;i<size;i++){
        temp =arr[i];
        j=i-1;
       while(j>=0&&temp<arr[j]){
        arr[j+1]=arr[j];
        j--;
       }
       
        arr[j+1]=temp;
    }
    
}


int main(){
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i]=size-i;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    insertionSort(arr);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}