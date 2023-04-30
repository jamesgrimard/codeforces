// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		bool ans = 1;
		vector<int> a(n) , r(n+1) , v;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			if (i > 0 && a[i] < a[i-1]) ans = 0;
			if (a[i] < i + 1) ans = 0;
			r[a[i]] = 1;
		}
		for (int i=1;i<=n;i++) if (r[i] == 0) v.push_back(i);
		if (ans == 0) {
			cout << -1;
		} else {
			int p = 0;
			for (int i=0;i<n;i++) {
				if (i > 0 && a[i] == a[i-1]) {
					cout << v[p] << " ";
					p++;
				} else {
					cout << a[i] << " ";
				}
			}
		}
		cout << '\n';
	}

	return 0;
}