// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		cout << 2 << '\n';
		if (n == 2) {
			cout << 1 << " " << 2 << '\n';
			continue;
		}
		cout << n-2 << " " << n << '\n';
		cout << (n-1) << " " << (n-1) << '\n';
		if (n > 3) {
			for (int i=3;i<=n-1;i++) {
				cout << (n-i) << " " << (n-i+2) << '\n';
			}
		}
	}

	return 0;
}
