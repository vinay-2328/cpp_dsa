#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the loop exits, 'low' is the position where the target should be inserted
    return low;
}

int main() {
    vector<int> v = {1, 3, 5, 6};
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;

    cout << "for target 1 is: " << searchInsert(v, target1) << endl;
    cout << "for target 2 is: " << searchInsert(v, target2) << endl;
    cout << "for target 3 is: " << searchInsert(v, target3) << endl;

    return 0;
}
