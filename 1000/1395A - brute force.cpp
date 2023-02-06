// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		vector<int> a(4);
		int mn = 0 , o = 0;
		bool z = 0;
		for (int i=0;i<4;i++) {
			cin >> a[i];
			if (i < 3) {
				if (a[i] % 2 == 1) o++;
				if (a[i] == 0) z = 1;
				if (a[i] < mn || i == 0) mn = a[i];
			}
		}
		bool ans = 1;
		if (o > 0 && z == 1 && a[3] % 2 == 1) ans = 0;
		if (o == 2 && a[3] % 2 == 0) ans = 0;
		if (o == 1 && a[3] % 2 == 1) ans = 0;

		(ans == 1) ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;
}
