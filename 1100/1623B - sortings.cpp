// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<pair<int,int>> a(n) , r(n);
		vector<bool> c(n+1);
		for (int i=0;i<n;i++) {
			cin >> a[i].first >> a[i].second;
			r[i].first = a[i].second-a[i].first+1; r[i].second = i;
		}
		sort(begin(r),end(r));
		for (int i=0;i<size(r);i++) {
			for (int j=a[r[i].second].first;j<=a[r[i].second].second;j++) {
				if (c[j] == 0) {
					c[j] = 1;
					cout << a[r[i].second].first << " " << a[r[i].second].second << " " << j << '\n';
				}
			}
		}
	}

	return 0;
}

