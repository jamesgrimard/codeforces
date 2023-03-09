// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , q; cin >> n >> q;
	vector<int> a;
	map<int,int> m;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (m[x] == 0) {
			m[x] = i+1;
			a.push_back(x);
		}
	}
	for (int i=0;i<q;i++) {
		int x; cin >> x;
		cout << m[x] << " ";
		for (auto [k,v] : m) {
			if (v < m[x]) m[k]++;
		}
		m[x] = 1;
	}

	return 0;
}

