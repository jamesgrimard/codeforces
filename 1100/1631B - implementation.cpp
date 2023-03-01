// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		long long R = a[n-1] , S = 0 , cnt = 0;
		bool f = 0 , suffix = 0;
		for (int i=n-1;i>=0;i--) {
			if (suffix == 0) {
				if (a[i] == R) {
					S += 2;
					continue;
				}
				suffix = 1;
			}
			if (a[i] != R) f = 1;
			if (n-i == S || i == 0) {
				if (f == 1) cnt++;
				f = 0;
				S = 2*(n-i);
				suffix = 0;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

