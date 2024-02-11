#include<iostream>
using namespace std;



int thriceNum(int arr[],int size){
    int counter=1;
    int val=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i= 0;i<size;i++){
        val =arr[i];
        if(val==arr[i+1]){
            counter++;

            if(counter==3){
                return val;
            }
        }else{
            val = arr[i];
            counter =1;
        }
    }
    
}

int main(){
    int arr[]={12,34,78,96,45,86,12,34,78,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int val = thriceNum(arr,size);

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i =0;i<size;i++){
        if(val==arr[i]){
            arr.removeDuplicates(val);
        }
    }
}