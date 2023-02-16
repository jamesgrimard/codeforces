// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	map<char,int> m;
	vector<string> a(n);

	for (int i=0;i<n;i++) {
		cin >> a[i];
		for (int j=0;j<n;j++) m[a[i][j]]++;
	}

	bool ans = 1;
	char c = a[0][0];

	for (int i=0;i<n;i++) {
		if (a[i][i] != a[i][n-1-i] || a[i][i] != c || a[i][n-1-i] != c) ans = 0;
	}

	if (size(m) != 2 || m[c] != n*2-1) ans = 0;

	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



