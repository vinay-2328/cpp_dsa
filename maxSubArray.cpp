#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int currentSum = nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                currentSum += nums[i];
            }else{
                currentSum = nums[i];
            }
        }
        sum = max(sum,currentSum);

        return sum;
    }
};

int main(){\
    Solution solution;
    vector<int> nums = {6,10,6};

    cout << solution.maxAscendingSum(nums);
}