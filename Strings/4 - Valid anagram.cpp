#include <iostream>
#include <string>
#include <map>

using namespace std;

bool areAnagrams(const string &s1, const string &s2) {
    // If lengths of strings are not equal, they cannot be anagrams
    if (s1.length() != s2.length()) {
        return false;
    }
    
    // Create a map to store the frequency of each character
    map<char, int> charCount;
    
    // Increment the count for characters in the first string
    for (char ch : s1) {
        charCount[ch]++;
    }
    
    // Decrement the count for characters in the second string
    for (char ch : s2) {
        charCount[ch]--;
    }
    
    // Check if all counts are zero
    for (auto count : charCount) {
        if (count.second != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    
    if (areAnagrams(s1, s2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    
    return 0;
}
