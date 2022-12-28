// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		if (n == 3) {
			cout << 1 << " " << 0 << " " << 0;
		} else if (n == 5) {
			cout << 0 << " " << 1 << " " << 0;
		} else if (n == 6) {
			cout << 2 << " " << 0 << " " << 0;
		} else if (n < 3 || n == 4 || n == 5) {
			cout << -1;
		} else if (n % 7 == 0) {
			cout << 0 << " " << 0 << " " << (n/7);
		} else if (n % 7 == 1) {
			cout << 1 << " " << 1 << " " << (n/7-1);
		} else if (n % 7 == 2) {
			cout << 3 << " " << 0 << " " << (n/7-1);
		} else if (n % 7 == 3) {
			cout << 0 << " " << 2 << " " << (n/7-1);
		} else if (n % 7 == 4) {
			cout << 2 << " " << 1 << " " << (n/7-1);
		} else if (n % 7 == 5) {
			cout << 4 << " " << 0 << " " << (n/7-1);
		} else if (n % 7 == 6) {
			cout << 1 << " " << 2 << " " << (n/7-1);
		}

		cout << '\n';
	}

	return 0;
}

