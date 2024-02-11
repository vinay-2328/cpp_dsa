#include<iostream>
using namespace std;

bool check(string s){
    int left =0;
    int right = (s.length())-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left ++;
        right --;
    }
    return true;
}
int main(){
    string str1="aaabaaa";
    string str2 ="aabaacaa";
    cout<< check(str1);
    cout<<endl<<check(str2);
}