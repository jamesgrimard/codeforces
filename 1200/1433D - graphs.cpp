// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<pair<int,pair<int,int>>> a(n);
		map<int,int> m;
		for (int i=0;i<n;i++) {
			cin >> a[i].second.first;
			a[i].second.second = i+1;
			m[a[i].second.first]++;
		}
		for (auto [k,v] : m) {
			for (int i=0;i<n;i++) if (a[i].second.first == k) a[i].first = v;
		}
		sort(rbegin(a),rend(a));
		if (m.size() < 2) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (int i=1;i<n;i++) {
				for (int j=0;j<n;j++) {
					if (a[j].second.first != a[i].second.first) {
						cout << a[i].second.second << " " << a[j].second.second << '\n';
						break;
					}
				}
			}
		}

	}

	return 0;
}