#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
     int sign = 1;

        for (int num : nums) {
            if (num == 0) {
                return 0; // If there's a zero, the result is 0
            } else if (num < 0) {
                sign = -sign; // Change sign for negative numbers
            }
        }

        return sign;
    }
};

int main(){
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    Solution solution;
    cout<< solution.arraySign(nums);
}