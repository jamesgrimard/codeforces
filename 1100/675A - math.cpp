// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int MOD(int a , int b) {
	int m = a % b;
	if (m < 0) {
		m = b < 0 ? m - b : m + b;
	}
	return m;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b, c; cin >> a >> b >> c;

	if ((b < a && c >= 0) || (a < b && c <= 0)) {
		cout << "NO";
	} else {
		(a == b || MOD(b,c) == MOD(a,c)) ? cout << "YES" : cout << "NO";
	}

	return 0;
}

