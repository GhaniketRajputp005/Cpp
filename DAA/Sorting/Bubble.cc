#include<iostream>
using namespace std;
#define size 10

void bubbleSort(int arr[]){
    
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){ // after each pass we have to leave last elements from
                                        //comparisons
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }

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
    bubbleSort(arr);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}