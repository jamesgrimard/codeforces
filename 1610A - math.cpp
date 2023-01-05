// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--){
		int n , m ; cin >> n >> m;

		if (n == 1 && m == 1) {
			cout << 0 << '\n';
		} else if (n == 1 || m == 1) {
			cout << 1 << '\n';
		} else {
			cout << 2 << '\n';
		}
	}

	return 0;
}

