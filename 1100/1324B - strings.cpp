// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		unordered_map<int,int> m;
		bool ans = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if ((i+1) - m[x] > 1 && m[x] != 0) ans = 1;
			if (m[x] == 0) m[x] = i + 1;
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

