// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		bool ans = 1;
		int r = 0 , b = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == 'R') r++;
			if (s[i] == 'B') b++;
			if (i == n-1 || s[i] == 'W') {
				if ((r != 0 && b == 0) || (b != 0 && r == 0)) ans = 0;
				r = 0; b = 0;
			}
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

