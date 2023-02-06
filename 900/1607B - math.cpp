// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		long long x, n;
		cin >> x >> n;

		long long k = 0;

		if (n % 4 == 3) {
			k = n + 1;

		} else if (n % 4 == 2) {
			k = 1;

		} else if (n % 4 == 1) {
			k = n * -1;
		}

		(x % 2 == 0) ? cout << (x + k) : cout << (x + k * -1);

		cout << '\n';

	}
	return 0;
}