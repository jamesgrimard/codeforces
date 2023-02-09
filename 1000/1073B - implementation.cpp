// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,int> m;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x] = i + 1;
	}
	int mx = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (m[x] < mx) cout << 0 << " ";
		if (m[x] >= mx) cout << m[x] - mx << " ";
		mx = max(mx,m[x]);
	}

	return 0;
}



