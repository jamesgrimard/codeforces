// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		long long sum = 0;

		for (int i=0;i<n;i++) {
			int x; cin >> x;
			sum += x;
		}

		long long o = sum % n;

		cout << ((n - o) * o) << '\n';

	}

	return 0;
}
