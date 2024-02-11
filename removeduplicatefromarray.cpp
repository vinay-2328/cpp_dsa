#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            count++;
            nums.erase(begin(nums) + i + 1, begin(nums) + i + 2);
            i--; // Adjust the index after erasing
        }
    }

    return n - count;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 5, 6};
    int newLength = removeDuplicates(nums);

    cout << "Modified Array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }

    return 0;
}
