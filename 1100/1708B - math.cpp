// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n , l , r; cin >> n >> l >> r;
		int L = l;
		vector<int> a;
		bool ans = 1;
		for (int i=1;i<=n;i++) {
			if (l % i != 0) {
				if (l - (l%i) >= L) {
					a.push_back(l-(l%i));
					continue;
				}
				l += (i - (l % i));
			}
			if (l > r) {
				ans = 0;
				break;
			}
			a.push_back(l);

		}
		if (ans == 0) {
			cout << "NO";
		} else {
			cout << "YES\n";
			for (auto v : a) cout << v << " ";
		}
		cout << '\n';
	}

	return 0;
}

