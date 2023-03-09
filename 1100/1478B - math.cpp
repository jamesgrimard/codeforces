// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			bool flag = 0;
			int p = x % k;
			while (p <= x) {
				int P = p;
				while (P > 0) {
					if (P % 10 == k) break;
					P /= 10;
				}
				if (P % 10 == k) {
					flag = 1;
					break;
				}
				p += k;
			}

			(flag == 1) ? cout << "YES\n" : cout << "NO\n";
		}
	}

	return 0;
}

