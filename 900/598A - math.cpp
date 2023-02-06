// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		long long n; cin >> n;

		long long total = (n * n + n) / 2;

		for (long long i=1;i<=n;i*=2) {
			total -= (2 * i);
		}

		cout << total << '\n';
	}


	return 0;
}
