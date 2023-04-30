// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<bool> r(n+1);
		int k = 0;
		for (int i=0;i<n;i++) {
			int q; cin >> q;
			int mn = 0;
			bool f = 0;
			for (int j=0;j<q;j++) {
				int x; cin >> x;
				if (r[x] == 0) {
					f = 1;
					if (mn == 0 || x < mn) {
						r[mn] = 0;
						mn = x;
						r[mn] = 1;
					}
				}
			}
			if (f == 0) k = i + 1;
		}
		if (k == 0) {
			cout << "OPTIMAL\n";
		} else {
			cout << "IMPROVE\n";
			for (int i=1;i<=n;i++) {
				if (r[i] == 0) {
					cout << k << " " << i << '\n';
					break;
				}
			}
		}
	}

	return 0;
}