// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,vector<int>> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x-1].push_back(i);
		}
		vector<int> a(n);
		for (auto [k,v] : m) {
			int count = 1;
			for (int i=1;i<size(v);i++) {
				if ((v[i]-v[i-1]) % 2 == 1) count++;
			}
			a[k] = count;
		}
		for (auto v : a) cout << v << " ";
		cout << '\n';
	}

	return 0;
}

