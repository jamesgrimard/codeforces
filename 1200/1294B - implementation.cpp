// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		sort(begin(a),end(a));
		bool ans = 1;
		for (int i=1;i<n;i++) {
			if (a[i].first < a[i-1].first || a[i].second < a[i-1].second) ans = 0;
		}
		if (ans) {
			cout << "YES\n";
			int pr = 0 , pu = 0;
			for (int i=0;i<n;i++) {
				for (int j=0;j<a[i].first-pr;j++) cout << "R";
				for (int j=0;j<a[i].second-pu;j++) cout << "U";
				pr = a[i].first;
				pu = a[i].second;
			}
		} else {
			cout << "NO";
		}
		cout << '\n';
	}

	return 0;
}