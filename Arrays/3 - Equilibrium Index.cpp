## Approach 1 : 

#include <iostream>
#include <vector>

using namespace std;

int findEquilibriumIndex(const vector<int>& nums) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int num : nums) {
        totalSum += num;
    }

    // Iterate through the array to find the equilibrium index
    for (int i = 0; i < nums.size(); ++i) {
        // totalSum - leftSum - nums[i] is the sum of elements to the right of index i
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; // Equilibrium index found
        }
        leftSum += nums[i];
    }

    return -1; // No equilibrium index found
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 2};
    int index = findEquilibriumIndex(arr);

    if (index != -1) {
        cout << "Equilibrium index found at: " << index << endl;
    } else {
        cout << "No equilibrium index found." << endl;
    }

    return 0;
}



## Approach 2 : 
- Can also be done using prefix & suffix sum
