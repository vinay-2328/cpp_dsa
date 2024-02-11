#include<iostream>
using namespace std;

int  removeNum(int arr[],int size,int val){

    int i=0;
    int j=0;

    while(i<9){
        if(arr[i]!= val){
            arr[j] = arr[i];
            j+=1;
        }
        i+=1;
    }
    
    return j;
}

int main(){
    int arr[] ={1,3,4,2,2,9,4,2,0};
    int size = sizeof(arr);
    
    cout<< removeNum(arr,size,2);
}