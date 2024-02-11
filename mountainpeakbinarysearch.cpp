#include<iostream>
using namespace std;

int mountainpeak(int arr[],int size){

    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;

    }
   
    return s;
}

int main(){

    int arr[4]={3,4,5,1};
    int size =  sizeof(arr);
    cout << "mountain peak of the given array is: "<<  mountainpeak(arr,size);
}