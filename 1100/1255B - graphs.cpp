// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<int> a(n);
		int sum = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			sum += a[i];
		}
		if (m != n || n < 3) {
			cout << -1 << '\n';
			continue;
		}
		cout << sum * 2 << '\n';
		for (int i=0;i<n;i++) {
			int k = i + 2;
			if (i == n-1) k = 1;
			cout << i+1 << " " << k << '\n';
		}
	}

	return 0;
}

