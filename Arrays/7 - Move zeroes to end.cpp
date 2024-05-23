#include <vector>
#include <iostream>

using namespace std;

void moveZeroesToEnd(vector<int>& arr) {
    int n = arr.size();
    int lastNonZeroFoundAt = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            // Swap the current element with the element at lastNonZeroFoundAt
            swap(arr[i], arr[lastNonZeroFoundAt]);
            lastNonZeroFoundAt++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, -2, 3, 4, 0, 5, -27, 9, 0};
    moveZeroesToEnd(arr);

    // Output the result
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
