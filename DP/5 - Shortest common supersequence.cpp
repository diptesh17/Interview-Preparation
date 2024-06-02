/*
/  i/p =  A G G T A B
       = G X T X A Y B
/
/  o/p = Jo common hai , vo ek baar likhna hai , rest ko likhna hi hoga  ( Length = 9)
/
/  Imp = Simply  =   m + n - LCS(str1 , str2 , m , n)
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

int main() {
	string X, Y;
  cin >> X >> Y;
	int n = X.length(), m = Y.length();

       // Just modification here from original LCS
	cout << m + n - LCS(X, Y, n, m) << endl;
	return 0;
}


// Bottom up DP

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
	string X, Y;
  cin >> X >> Y;
	int n = X.length(), m = Y.length();

	cout << m + n - LCS(X, Y, n, m) << endl;
	return 0;
}
