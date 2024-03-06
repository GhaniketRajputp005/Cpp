#include<iostream>
using namespace std;
#define size 5

void swap(int *a,int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}

int partition(int *arr,int l,int r){
    int j=l,i=l-1;

    /*
    int x = rand()%(r-l+1)+l;    randomised quick sort,remember to add l .
    swap(&arr[x],&arr[r]);
    */
    
    int pivot = arr[r];

    while(j<r){
        if(arr[j]<pivot){    
            i++;
            swap(&arr[i],&arr[j]);
        }
        j++;
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
   

}

void QuickSort(int arr[],int l,int r){
    if(l<r){
        int pivotindex = partition(arr,l,r);
        QuickSort(arr,l,pivotindex-1);
        QuickSort(arr,pivotindex+1,r);
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
    QuickSort(arr,0,size-1);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}