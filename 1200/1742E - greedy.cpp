// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , m ; cin >> n >> m;
		vector<pair<int,long long>> a;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			pair<int,long long> p;
			if (i == 0 || x > a[a.size()-1].first) {
				p.first = x;
				(i == 0) ? p.second = p.first : p.second = p.first + a[a.size()-1].second;
				a.push_back(p);
			} else {
				a[a.size()-1].second += x;
			}
		}

		for (int i=0;i<m;i++) {
			int x; cin >> x;
			long long ans = 0;
			int l = 0 , r = a.size()-1;
			while (l <= r) {
				int j = (l + r) / 2;
				if (a[j].first <= x && (j == a.size()-1 || a[j+1].first > x)) {
					ans = a[j].second;
					break;
				}
				if (a[j].first < x) l = j + 1;
				if (a[j].first > x) r = j - 1;
			}
			cout << ans << " ";
		}
		cout << '\n';
	}

	return 0;
}