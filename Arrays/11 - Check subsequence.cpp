#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(const string &s1, const string &s2) {
    int m = s1.length();
    int n = s2.length();

    int i = 0; // For index of s2
    int j = 0; // For index of s1 (or subsequence)

    // Traverse s2 and s1 using a while loop, and compare current character of s2 with first unmatched character of s1,
    // if matched then move ahead in s1
    while (i < n && j < m) {
        if (s1[j] == s2[i]) {
            j++;
        }
        i++;
    }

    // If all characters of s1 were found in s2
    return (j == m);
}

int main() {
    string s1, s2;

    cout << "Enter the first string (subsequence): ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    if (isSubsequence(s1, s2)) {
        cout << s1 << " is a subsequence of " << s2 << endl;
    } else {
        cout << s1 << " is not a subsequence of " << s2 << endl;
    }

    return 0;
}
