#include <iostream>
#include <vector>

using namespace std;

bool canBeNonDecreasing(vector<int>& nums) {
    int n = nums.size();
    int count = 0; // Count of modifications

    for (int i = 1; i < n; ++i) {
        if (nums[i - 1] > nums[i]) {
            // If more than one modification is required
            if (++count > 1) {
                return false;
            }
            
            // Check if modifying nums[i-1] or nums[i] can solve the problem
            if (i - 2 < 0 || nums[i - 2] <= nums[i]) {
                nums[i - 1] = nums[i]; // Modify nums[i-1]
            } else {
                nums[i] = nums[i - 1]; // Modify nums[i]
            }
        }
    }
    return true;
}

int main() {
    vector<int> arr = {4, 2, 3};
    if (canBeNonDecreasing(arr)) {
        cout << "The array can be made non-decreasing by modifying at most one element." << endl;
    } else {
        cout << "The array cannot be made non-decreasing by modifying at most one element." << endl;
    }
    return 0;
}
