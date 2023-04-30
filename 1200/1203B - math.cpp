// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		vector<pair<int,int>> a;
		for (int i=0;i<4*n;i++) {
			int x; cin >> x;
			m[x]++;
		}
		for (auto [k,v] : m) {
			pair<int,int> p;
			p.first = k , p.second = v;
			a.push_back(p);
		}
		bool ans = 1;
		for (int i=0;i<=a.size()/2;i++) {
			if (i == a.size()/2 && a.size() % 2 == 0) continue;
			if (a[i].second % 2 != 0 || a[a.size()-1-i].second % 2 != 0) ans = 0;
			if (i > 0 && a[i].first * a[a.size()-1-i].first != a[i-1].first * a[a.size()-1-(i-1)].first) ans = 0;
			if (i == a.size()/2) {
				if (a[i].second % 4 != 0) ans = 0;
			} else {
				if (a[i].second != a[a.size()-1-i].second) ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}