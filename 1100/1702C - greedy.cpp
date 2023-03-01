// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		map<int,pair<int,int>> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (m[x].first == 0) {
				m[x].first = i+1;
				m[x].second = i+1;
			} else {
				m[x].second = i+1;
			}
		}
		for (int i=0;i<k;i++) {
			int l,r; cin >> l >> r;
			if (m[l].first == 0 || m[r].first == 0 || m[l].first > m[r].second) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
			}
		}
		//for (auto [k,v] : m) cout << k << "  " << v.first << " " << v.second << '\n';
	}


	return 0;
}

