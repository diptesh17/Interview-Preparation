#include <iostream>
#include <vector>

using namespace std;

vector<int> intersectionOfSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> intersection;
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            // Avoid duplicates in the intersection
            if (intersection.empty() || intersection.back() != arr1[i]) {
                intersection.push_back(arr1[i]);
            }
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return intersection;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    vector<int> result = intersectionOfSortedArrays(arr1, arr2);

    if (!result.empty()) {
        cout << "Intersection of the arrays is: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found." << endl;
    }

    return 0;
}
