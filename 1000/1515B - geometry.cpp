// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		if ((long long) sqrt(n/2) * (long long) sqrt(n/2) * 2 == n || n == 2 || n == 4 || (long long) sqrt(n/4) * (long long) sqrt(n/4) * 4 == n ) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
