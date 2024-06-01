/*
/  i/p : x = a b c d g h 
/        y = a b e d f h r 
/
/  o/p = a b d h ( length = 4 )
*/

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

	cout << LCS(X, Y, n, m) << endl;
	return 0;
}
