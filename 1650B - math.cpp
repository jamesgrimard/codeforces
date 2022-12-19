// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int l,r,a;
		cin >> l >> r >> a;

		if (a == 1) {
			cout << r;
		} else if (r % a != 0) {
			if ((r % a) == (a - 1)) {
				cout << ((r/a) + (r%a));
			} else {
				int k = (r / a + 1) * a - a - 1;
				(l <= k) ? cout << (k / a + (k % a)) : cout << ((r/a) + (r%a));
			}
		} else {
			(l < r) ? cout << ((r-1) / a + ((r-1) % a)) : cout << (r / a);
		}

		cout << '\n';
	}

	return 0;
}