#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<" "<< arr[i];
    }
}

int main(){
    int arr[] = {64,25,12,22,11};
    int size = 5;
    bubblesort(arr,size);
}