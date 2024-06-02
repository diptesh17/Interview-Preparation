/*
/    Given : a , b string is hidden
/          : reverse a & assign to b 
/          : Now a , b are two strings , go with LCS
/  
/   Result : LPS ( a )   ====   LCS ( a , reverse(a) )
*/

// Recursive :

#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int n, int m) {
    // base case
    if (n == 0 || m == 0)
        return 0;

    // when last character is same
    if (X[n - 1] == Y[m - 1])
        return 1 + LCS(X, Y, n - 1, m - 1);
    // when last character is not same -> pick max
    else
        return max(LCS(X, Y, n - 1, m), LCS(X, Y, n, m - 1));
}

string reverseStr(const string& str) {
    string reversed_str = str;
    int n = reversed_str.length();

    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
        swap(reversed_str[i], reversed_str[n - i - 1]);

    return reversed_str;
}

int main() {
    string str = "agbcba";
    string str2 = reverseStr(str);

    int n = str.length(), m = str2.length();

    cout << LCS(str, str2, n, m) << endl;

    return 0;
}



// Bottom up DP : 

#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int n, int m) {
    int dp[n + 1][m + 1]; // DP - matrix

    // base case of recursion --> for initialization of dp - matrix
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (i == 0 || j == 0)
                dp[i][j] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (X[i - 1] == Y[j - 1]) // when last character is same
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else // when last character is not same -> pick max
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

    return dp[n][m];
}

int main() {
    string X;
    cin >> X;
    int n = X.length();
    
    // Reverse the string X to create Y
    string Y = X;
    reverse(Y.begin(), Y.end());

    cout << LCS(X, Y, n, n) << endl;
    return 0;
}
