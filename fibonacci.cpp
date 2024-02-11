#include<iostream>
#include<ctime>

using namespace std;

int recursive_fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return recursive_fibo(n-1)+recursive_fibo(n-2);
    }
}

int fibonacci(int n){

    int first, second,next;
    first = 0;
    second = 1;
    for (int i = 0; i < n; i++)
    {
        cout << first<< " ";
        next = first + second;
        first = second;
        second= next;
    }
    
}

int main(){
    int n;
    clock_t total_time;

    cout << "Enter the number for fibonacci series"<<endl;
    n=15;
    cout << "fibonacci series is given below"<<endl;

    total_time = clock();
    fibonacci(n);
    total_time = clock() - total_time;
    cout <<endl<< "time taken by iterative function is " << (float)total_time/CLOCKS_PER_SEC<<endl;



      total_time = clock();
    for (int i = 0; i < n; i++)
    {
        cout<< recursive_fibo(i)<< " ";
    }
     total_time = clock() - total_time;
    cout <<endl<< "time taken by recursive function is " << (float)total_time/CLOCKS_PER_SEC<<endl;
}