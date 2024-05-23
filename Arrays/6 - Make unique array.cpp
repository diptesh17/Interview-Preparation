#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int minRemovalsForDistinct(vector<int>& arr) {
    unordered_set<int> uniqueElements;
    int removalsNeeded = 0;

    for (int num : arr) {
        // If the element is not in the set, add it
        // If it's already in the set, increment the removal count
        if (uniqueElements.count(num) == 0) {
            uniqueElements.insert(num);
        } else {
            removalsNeeded++;
        }
    }

    return removalsNeeded;
}

int main() {
    vector<int> arr = {1, 2, 1, 2};
    int removals = minRemovalsForDistinct(arr);
    cout << "Minimum number of removals needed: " << removals << endl;

    return 0;
}
