// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long l , r , k; cin >> l >> r >> k;
		if (l > k) {
			cout << k;
		} else {
			cout << r + (k - (r % k));
		}
		cout << '\n';
	}


	return 0;
}