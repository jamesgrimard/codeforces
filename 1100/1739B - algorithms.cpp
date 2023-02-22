// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		int sum = 0;
		bool ans = 1;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x > sum || x == 0) {
				sum += x;
				a[i] = sum;
			} else {
				ans = 0;
			}
		}
		if (ans == 0) {
			cout << -1 << '\n';
			continue;
		}
		for (auto v : a) cout << v << " ";
		cout << '\n';
	}


	return 0;
}

