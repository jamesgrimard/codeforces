// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >>n ;
		vector<pair<int,int>> a(n),b;
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i+1;		
		}
		sort(begin(a),end(a));
		if (a[0].first == a[n-1].first) {
			cout << 0 << '\n';
			continue;
		}
		if (a[0].first == 1) {
			cout << -1 << '\n';
			continue;
		}
		pair<int,int> p;
		bool f = 1;
		while (f == 1) {
			f = 0;
			for (int i=n-1;i>=1;i--) {
				for (int j=i-1;j>=0;j--) {
					while (ceil((double)a[i].first/(double)a[j].first) > 1) {
						a[i].first = ceil((double)a[i].first/(double)a[j].first);
						p = {a[i].second,a[j].second};
						b.push_back(p);
					}
				}
			}
			for (int i=1;i<n;i++) {
				if (a[i].first != a[i-1].first) {
					sort(begin(a),end(a));
					f = 1;
					break;
				}
			}
		}
		
		cout << b.size() << '\n';
		for (auto v : b) cout << v.first << " " << v.second << '\n';
	}

	return 0;
}