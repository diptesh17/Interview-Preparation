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


