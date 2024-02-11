#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[6]={1,8,2,22,99,0};

    int min= INT_MAX;
    int max = INT_MIN;

    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max = arr[i];
        }else if(arr[i]<min){
            min = arr[i];

        }

    }

    cout<<"max value is "<< max;
    cout <<"min value is "<<min;
}