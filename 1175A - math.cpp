// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		long long n , k; cin >> n >> k;

		long long tally = 0;

		if (n < k) {
			cout << n << '\n'; continue;
		}

		while (n > 0) {
			if (n % k == 0) {
				n /= k; tally++;
			} else {
				tally += (n%k);
				n -= (n%k); 
			}
		}

		cout << tally << '\n';
	}

	return 0;
}

