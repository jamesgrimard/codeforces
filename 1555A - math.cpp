// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		long long n;
		cin >> n;

		if (n < 6) {
			cout << 15;
		} else if (n % 6 == 0) {
			cout << (n / 6 * 15);
		} else if (n % 6 <= 2) {
			cout << ((n / 6 - 1) * 15 + 20);
		} else if (n % 6 <= 4) {
			cout << ((n / 6 - 1) * 15 + 25);
		} else {
			cout << (n / 6 * 15 + 15);
		}

		cout << '\n';

	}
	return 0;
}