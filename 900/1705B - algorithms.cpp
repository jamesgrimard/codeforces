// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		bool flag = false; long long sum = 0;

		for (int i=0;i<n;i++) {

			int x; cin >> x;

			if (i == n-1) break;

			if (x != 0) flag = true;

			if (flag == true) {
				sum += x;
				if (x == 0) sum++;
			}
		}

		cout << sum << '\n';

	}

	return 0;
}
