// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		bool ans = 1;

		sort(begin(a),end(a));

		for (int i=0;i<n;i+=2) {
			if (n % 2 == 1 && i == 0) {
				if (a[i].second != 0) {
					ans = 0;
					break;
				}
				i--;
				continue;
			}
			
			if ((a[i].second == i && a[i+1].second == i+1) || a[i].second == i+1 && a[i+1].second == i) {
				continue;
			} else {
				ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}