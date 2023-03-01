// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		long long x = 0,y = 0,p = 0;
		for (int i=0;i<n;i++) {
			(i % 2 == 0) ? x = gcd(x,a[i]) : y = gcd(y,a[i]);
		}
		bool Y = 1 , X = 1;
		for (int i=0;i<n;i++) {
			if (i % 2 == 0 && a[i] % y == 0) Y = 0;
			if (i % 2 == 1 && a[i] % x == 0) X = 0;
		}
		if (Y == 1) {
			cout << y << '\n';
		} else if (X == 1) {
			cout << x << '\n';
		} else {
			cout << 0 << '\n';
		}
	}

	return 0;
}

