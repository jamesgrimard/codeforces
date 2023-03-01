// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<bool> a(n+1); a[0] = 1;
		for (int i=0;i<n;i++) {
			int x; cin>>x;
			while (x > 0) {
				if (x <= n && a[x] != 1) {
					a[x] = 1;
					break;
				}
				x /= 2;
			}
		}
		bool ans = 1;
		for (auto v : a) {
			if (v == 0) ans = 0;
			
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

