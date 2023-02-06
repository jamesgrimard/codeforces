// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ;cin >> n;
		bool ans = 1; int p = 0 , X = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x < p && i != 0 && i != n-1 && X == 0) X = x;
			if (X != 0 && x < X) X = x;
			if (X != 0 && X < x) ans = 0;
			p = x;
		}
		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}

	return 0;
}

