#include <iostream>
using namespace std;

int power(int x,int y){
    if(y==0){
        return 1;
    }else{
        return(x*power(x,y-1));
    }
}

int main(){
    printf("%d", power(3,2));
}