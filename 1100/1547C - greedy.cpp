// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int w , n , m; cin >> w >> n >> m;
		vector<int> a(n) , b;
		for (int i=0;i<n;i++) cin >> a[i];
		int q = 0;
		bool ans = 1;
		for (int i=0;i<m;i++) {
			int x; cin >> x;
			while (x > a[q] && q < n) {
				b.push_back(a[q]);
				q++;
			}
			b.push_back(x);
		}
		for (int i=q;i<n;i++) b.push_back(a[i]);

		for (auto v:b) {
			if (v == 0) w++;
			if (v > w) ans = 0;
		}
		if (ans == 0) {
			cout << -1;
		} else {
			for (auto v:b) cout << v << " ";
		}
		cout << '\n';
	}

	return 0;
}

