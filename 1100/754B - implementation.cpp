// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<string> a(8);

	for (int i=2;i<=5;i++) {
		string s; cin >> s;
		s = "oo"+s+"oo";
		a[i] = s;
	}
	a[0] = "oooooooo";
	a[6] = "oooooooo";
	a[7] = "oooooooo";
	a[1] = "oooooooo";


	bool ans = 0;

	for (int i=2;i<=5;i++) {
		for (int j=2;j<=5;j++) {
			if (a[i][j] != '.') continue;

			if (a[i][j+1] == 'x' && a[i][j-1] == 'x') ans = 1;
			if (a[i][j+1] == 'x' && a[i][j+2] == 'x') ans = 1;
			if (a[i][j-1] == 'x' && a[i][j-2] == 'x') ans = 1;

			if (a[i+2][j] == 'x' && a[i+1][j] == 'x') ans = 1;
			if (a[i-1][j] == 'x' && a[i+1][j] == 'x') ans = 1;
			if (a[i-1][j] == 'x' && a[i-2][j] == 'x') ans = 1;

			if (a[i+1][j-1] == 'x' && a[i-1][j+1] == 'x') ans = 1;
			if (a[i+1][j-1] == 'x' && a[i+2][j-2] == 'x') ans = 1;
			if (a[i-1][j+1] == 'x' && a[i-2][j+2] == 'x') ans = 1;
			
			if (a[i-1][j-1] == 'x' && a[i+1][j+1] == 'x') ans = 1;
			if (a[i-1][j-1] == 'x' && a[i-2][j-2] == 'x') ans = 1;
			if (a[i+1][j+1] == 'x' && a[i+2][j+2] == 'x') ans = 1;
			
		}
	}

	(ans == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}

