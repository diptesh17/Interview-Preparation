#include <iostream>
#include <vector>

using namespace std;

int countPairsWithSum(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size()-1;
    int count = 0;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            count++;
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    // If no pairs found, return -1
    return count == 0 ? -1 : count;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 4;
    int result = countPairsWithSum(arr, target);

    if (result != -1) {
        cout << "Number of pairs with sum " << target << " is: " << result << endl;
    } else {
        cout << "No pairs found with sum " << target << endl;
    }

    return 0;
}
