// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		
		bool ans = 0;
		for (int i=0;i<n;i++) {
			bool A = 1;
			for (int j=0;j<n;j++) {
				if (i == j) continue;
				if (abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second) > k) A = 0;
				//cout << (abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second)) << " " << k << '\n';
			}
			if (A == 1) {
				ans = 1; break;
			}
		}
		(ans == 1) ? cout << 1 : cout << -1;
		cout << '\n';
	}

	return 0;
}
