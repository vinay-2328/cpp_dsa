#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid]== key){
            cout << "key found at index " << mid <<endl<< "value is: "<< arr[mid];
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
        
        }else{
            end = mid - 1;
           
        }
        mid = (start+end)/2;
    }
    cout << "key not in array";
    return -1;
    

}

int main(){

    int ary[] = {2,4,6,19,22,44,56};
    int key = 56;
    int key2 = 3;

    int size = 7;

    binarySearch(ary,size,key2);

}