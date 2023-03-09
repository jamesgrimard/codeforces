// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {

		vector<int> a(3);
		for (int i=0;i<3;i++) cin >> a[i];

		sort(begin(a),end(a));

		int m; cin >> m;

		int mx = max(0,a[0]-1) + max(0,a[1]-1) + max(0,a[2]-1);
		int mn = (a[0]+a[1]+1) + (a[2] - 2*(a[0]+a[1]+1));

		(mx >= m && mn <= m) ? cout << "YES\n" : cout << "NO\n";

	}


	return 0;
}

