// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		map<int,int> m;

		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x]++;
		}

		int c = 1;

		for (auto [k,v] : m) c = max(c,v);

		int ms = n - c;
		if (ms == 0) {
			cout << 0 << '\n';
			continue;
		}

		int k = 0, ans = ms;

		while (ms > 0) {
			ms -= c * pow(2,k); k++;
			ans++;
		}

		cout << ans << '\n';
		
	}

	return 0;
}

