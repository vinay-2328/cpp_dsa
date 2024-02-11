#include<iostream>
using namespace std;

int leftbinarysearch(int arr[],int size, int key){

    int start = 0;
    int end = size-1;
    int  mid =  (start+end)/2;
    int lans = -1;
    

    while(start<=end){
        //search left most occurence of the key
        if(arr[mid] == key){
            lans = mid;
            end = mid - 1;
        }else if(key< arr[mid]){
            end = mid-1;
        }else if(key > arr[mid]){
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return lans;
}

int rightbinarysearch(int arr[],int size, int key){

    int start = 0;
    int end = size-1;
    int  mid =  (start+end)/2;
   
    int rans = -1;

    while(start<=end){
        
        //search right most occurence of the key
        if(arr[mid] == key){
            rans = mid;
            start = mid + 1;
        }else if(key< arr[mid]){
            end = mid-1;
        }else if(key > arr[mid]){
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return rans;
    

}

int main(){

    int arr[] = {1,2,2,2,2,3,4};
    int size =sizeof(arr);
    int key = 2;

    cout <<"left-most occcurence of the key 2 is at index: "<<leftbinarysearch(arr,size,key)<<endl;
    cout <<"right-most occcurence of the key 2 is at index: "<<rightbinarysearch(arr,size,key);
}