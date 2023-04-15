// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<pair<pair<int,int>,int>> a(n);
		for (int i=0;i<n;i++) cin >> a[i].first.first;
		for (int i=0;i<n;i++) {
			cin >> a[i].first.second;
			a[i].second = i;
		}
		sort(begin(a),end(a));
		bool ans = 1;
		for (int i=1;i<n;i++) {
			if (a[i].first.second < a[i-1].first.second) ans = 0;
		}
		if (ans == 0) {
			cout << -1 << '\n';
			continue;
		}
		vector<int> b;
		for (int i=0;i<n;i++) {
			if (a[i].second == i) continue;
			for (int j=0;j<n;j++) {
				if (a[j].second == i) {
					b.push_back(a[i].second+1);
					b.push_back(a[j].second+1);
					int tmp = a[i].second;
					a[i].second = a[j].second;
					a[j].second = tmp;
					break;
				}
			}
		}

		cout << b.size()/2 << '\n';
		for (int i=0;i<b.size();i+=2) cout << b[i] << " " << b[i+1] << '\n';

		//for (auto v:a) cout << v.first.first << "," << v.first.second << "," << v.second << '\n';
		
	}

	return 0;
}