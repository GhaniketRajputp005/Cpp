#include<iostream>
using namespace std;
#define size 10

void selectionSort(int arr[]){
    
    
    for(int i=0;i<size-1;i++){
        int min =i;
        for(int j=i+1;j<size;j++){ 
            if(arr[j]<arr[min]){
                min = j;
            }
            
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        

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
    selectionSort(arr);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}