// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , x , y; cin >> n >> x >> y;

		if ((x == 0 && y == 0) || (x != 0 && y != 0)) {
			cout << -1 << '\n'; continue;
		}

		if (x == 0) x = y;

		if (n % x != 1 && x != 1) {
			cout << -1 << '\n'; continue;
		}

		for (int i=1;i<=n;i+=x) {
			for (int j=0;j<x;j++){
				cout << i << " ";
			}
			if (i == 1)i++;
		}
		cout << '\n';
	}

	return 0;
}

