#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){

            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout <<" "<<arr[i];
    }
}
int main(){
    int arr[] = {64,25,12,22,11};
    int size = 5;
    selectionsort(arr,size);
}