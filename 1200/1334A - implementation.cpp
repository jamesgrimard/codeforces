// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		bool ans = 1;
		if (a[0].second > a[0].first) ans = 0;
		for (int i=1;i<n;i++) {
			if (a[i].first >= a[i-1].first && a[i].second >= a[i-1].second && a[i].first - a[i-1].first >= a[i].second - a[i-1].second) {

			} else {
				ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}


	return 0;
}