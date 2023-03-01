// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		map<int,vector<int>> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x].push_back(i);
		}
		int mx = -1;
		for (auto [k,v] : m) {
			if (size(v) >= 2) {
				for (int i=0;i<size(v)-1;i++) {
					mx = max(mx,v[i]+(n-v[i+1]));
				}
			}
		}
		cout << mx << '\n';
	}

	return 0;
}

