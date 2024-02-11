#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;

    // Use XOR to find the single element
    for (int num : nums) {
        result ^= num;
        cout<<result<<endl;
    }

    return result;
}

int main() {
    // Example 1
    vector<int> nums1 = {2, 2, 1};
    cout << "Example 1: " << singleNumber(nums1) << endl;

    // Example 2
    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << "Example 2: " << singleNumber(nums2) << endl;

    // Example 3
    vector<int> nums3 = {1};
    cout << "Example 3: " << singleNumber(nums3) << endl;

    return 0;
}
