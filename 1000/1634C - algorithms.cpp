// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int y , x; cin >> y >> x;

		if (y % 2 == 0 || (x == 1)) {
			cout << "YES\n";
			for (int i=1;i<=y;i++) {
				for (int j=0;j<x;j++){
					cout << (i+(j*y)) << " ";
				}
				cout << '\n';
			}
		} else {
			cout << "NO\n";
		}

	}

	return 0;
}
