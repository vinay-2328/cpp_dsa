#include<iostream>
using namespace std;

bool isPossible(int arr[],int size, int stud, int mid){
    int pgsum = 0;
    int studcount = 1;
    
    for(int i=0;i<size;i++){
        if(pgsum + arr[i] <= mid){
            pgsum += arr[i];
        }else{
            studcount++;
            if(studcount > stud || arr[i]>mid){
                return false;
            }
            pgsum = arr[i];
        }
    
    }
    return true;

}
int bookallocation(int arr[],int size, int stud, int sum){
    int s = 0;
    int e = sum;
    int mid = (s+e)/2;
    int ans = 0;
    while(s<=e){

        if(isPossible(arr,size,stud,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[4]={10,20,30,40};
    int stud = 2;
    int size = 4;
    int sum=0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout<<sum;

    cout << bookallocation(arr,size,stud,sum);
}