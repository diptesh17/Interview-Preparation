#include <iostream>
#include <vector>

using namespace std;

// Function to check if a matrix is symmetric
bool isSymmetric(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // Example of a symmetric matrix
    vector<vector<int>> symmetricMatrix = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };
    
    // Example of a non-symmetric matrix
    vector<vector<int>> nonSymmetricMatrix = {
        {1, 0, 0},
        {0, 1, 0},
        {1, 0, 1}
    };

    cout << "Symmetric Matrix is " << (isSymmetric(symmetricMatrix) ? "symmetric" : "not symmetric") << endl;
    cout << "Non-Symmetric Matrix is " << (isSymmetric(nonSymmetricMatrix) ? "symmetric" : "not symmetric") << endl;

    return 0;
}
