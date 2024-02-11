#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> result;
        for(int i = 0;i<nums.size();i++){

            for(int j = i;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                     result = {i,j};
                }
            }
        }
        return result;
}   
int main(){
    vector<int> nums(3);
    int t = 3;

    nums = {4,5,1,3,2,3};
    vector<int> result = twoSum(nums,t);
    
    for(int i:result){
        cout << i<<" ";
    }

}