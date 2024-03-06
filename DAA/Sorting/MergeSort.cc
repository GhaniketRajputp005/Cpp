#include<iostream>
using namespace std;
#define size 10


void merge(int *arr,int l,int mid,int r){
    int n1=mid-l+1; // l,mid both inclusive
    int n2 = r-mid;  // since mid is excluded 
    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        R[i]=arr[i+mid+1];
    }

    int i=0,j=0,k=l;

    while(i<n1&&j<n2){
        if(L[i]<=R[j]){   // equal to is written coz to make it stable
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];

        }
    }

    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }


}

void MergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = l+(r-l)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    MergeSort(arr,0,size-1);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}