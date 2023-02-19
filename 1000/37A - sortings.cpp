// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,int> m;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x]++;
	}

	int mx = 0;
	for (auto [k,v] : m) {
		mx = max(v,mx);
	}

	cout << mx << " " << size(m);

	return 0;
}

