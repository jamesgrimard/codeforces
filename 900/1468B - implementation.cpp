// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		bool ans = 1;
		vector<int> a(3) , b(5);
		for (int i=0;i<3;i++) cin >> a[i];
		for (int i=0;i<5;i++) cin >> b[i];
		for (int i=0;i<3;i++) {
			if (a[i]-b[i] < 0) {
				ans = 0;
			}
			a[i] -= b[i];
		}
		if (a[0] + a[2] >= b[3]) {
			b[3] = max(b[3]-a[0],0);
			a[2] -= b[3];
		} else {
			ans = 0;
		}

		if (a[1]+a[2] >= b[4]) {
			b[4] = max(b[4]-a[1],0);
			a[2] -= b[4];
		} else {
			ans = 0;
		}

		if (a[2] < 0) ans = 0;

		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';

	}

	return 0;
}

