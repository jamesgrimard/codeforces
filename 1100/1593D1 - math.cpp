	// github.com/jamesgrimard/codeforces
	#include <bits/stdc++.h>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

		int tt ; cin >> tt;
		while (tt--)  {
			int n; cin >> n;
			vector<int> a(n) , b;
			for (int i=0;i<n;i++) cin >> a[i];
			sort(begin(a),end(a));
			for (int i=1;i<n;i++) if (a[i] > a[i-1]) b.push_back(a[i]-a[0]);
			if (size(b) == 0) {
				cout << -1 << '\n';
				continue;
			}
			int p = b[0];
			for (int i=0;i<size(b);i++) p = gcd(p,b[i]);
			cout << p << '\n';
		}


		return 0;
	}

