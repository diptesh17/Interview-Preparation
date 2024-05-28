#include <iostream>
#include <algorithm> // Include this header for reverse function
using namespace std;

string reverseStringWordWise(string &s) {
    // Reverse the entire string
    reverse(s.begin(), s.end());
        
    int i = 0;
    // Variables to mark the beginning (l) and end (r) of words
    int l = 0, r = 0;
        
    int n = s.length();
        
    while (i < n) {
        // Move `r` and `i` to the end of the current word
        while (i < n && s[i] != ' ') {
            s[r++] = s[i++];
        }
            
        if (l < r) {
            // Reverse the current word
            reverse(s.begin() + l, s.begin() + r);
                
            // Add a space after the word
            s[r] = ' ';
            r++;
                
            // Move `l` to the start of the next word
            l = r;
        }
            
        i++; // Skip the space
    }
        
    // Remove the trailing space
    s = s.substr(0, r - 1);
        
    return s;
}

int main() {
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
    return 0;
}
