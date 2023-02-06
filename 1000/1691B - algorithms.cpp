// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		map<int,vector<int>> m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			m[a[i]].push_back(i+1);
		}
		for (auto [k,v] : m) {
			if (size(v) < 2) {
				cout << -1; goto out;
			}
			m[k].push_back(1);
		}
		for (int i=0;i<n;i++) {
			cout << m[a[i]][m[a[i]][size(m[a[i]])-1] % (size(m[a[i]])-1)] << " ";
			m[a[i]][size(m[a[i]])-1]++;
		}
		out: cout << '\n';
	}

	return 0;
}
