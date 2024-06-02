/*
/     Steps : 
/                str1 -> LCS -> str2
/
/                Deletion : str1.length() - LCS()
/                Insertion : str2.length() - LCS()
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
	string X = "heap";
	string Y = "pea";
	

	int n = X.length(), m = Y.length();

	cout << "Deletion" << n - LCS(X, Y, n, m) << endl;
	cout << "Insertion" << m - LCS(X, Y, n, m) << endl;
	return 0;
}



// Bottom up DP :

