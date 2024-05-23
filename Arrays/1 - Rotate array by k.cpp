#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to reverse a portion of the array
void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k steps
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    // Handle cases where k is greater than the size of the array
    k = k % n;
    
    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
    
    // Reverse the first k elements
    reverseArray(arr, 0, k - 1);
    
    // Reverse the remaining n - k elements
    reverseArray(arr, k, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(arr, k);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
