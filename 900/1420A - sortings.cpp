// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		bool ans = false;
		int p = 0;

		for (int i=0;i<n;i++){
			int x; cin >> x;
			if (x >= p && i != 0) ans = true;
			p = x;
		}

		(ans == true) ? cout << "YES" : cout << "NO";

		cout << '\n';

	}

	return 0;
}