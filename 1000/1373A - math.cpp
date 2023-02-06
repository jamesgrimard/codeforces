// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long a , b, c ; cin >> a >> b >> c;
		if (a < c) {
			cout << 1 << " ";
		} else {
			cout << -1 << " ";
		}
		if (b * a <= c) {
			cout << -1 << '\n';
		} else {
			cout << b << '\n';
		}
	}


	return 0;
}
