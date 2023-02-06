// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int gcd(int x , int y) {
	if (x % y == 0) return y;
	return gcd(y,(x%y));
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	int p = 0 , l = 0;

	for (int i=0;i<size(s);i++) {
		(s[i] == 'o') ? p++ : l++;
	}

	(p == 0 || l == 0 || l%p == 0) ? cout << "YES" : cout << "NO";


	return 0;
}

