// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	map<int,int> m;

	for (int i=0;i<n;i++) {
		int x ; cin >> x;
		m[x]++;
	}

	int mx = 0;

	for (auto [_,v] : m) mx = max(mx,v);

	cout << (n-mx);

	return 0;
}

