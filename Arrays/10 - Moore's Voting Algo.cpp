#include <bits/stdc++.h>

using namespace std;

int findMajorityElement(int arr[], int n) {
    int candidate = 0, count = 0;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; ++i) {
        if (count == 0) {
            candidate = arr[i];
        }
        count += (arr[i] == candidate) ? 1 : -1;
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; // Return -1 if no majority element is found
    }
}

int main() {
    // Example usage
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, n);
    if (majorityElement != -1) {
        cout << "The majority element is: " << majorityElement << endl;
    } else {
        cout << "No majority element found" << endl;
    }

    return 0;
}
