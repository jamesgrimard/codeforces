// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		int mx = 0 , cnt = 0;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i + 1;
		}
		sort(begin(a),end(a));
		cout << n << '\n';
		cout << a[0].second << " " << 0 << '\n';
		for (int i=1;i<n;i++) {
			int k = a[i].first % a[i-1].first;
			if (k == 0) {
				cout << a[i].second << " " << 0 << '\n';
				continue;
			}
			cout << a[i].second << " " << a[i-1].first - k << '\n';
			a[i].first += (a[i-1].first - k);
		}
	}

	return 0;
}

