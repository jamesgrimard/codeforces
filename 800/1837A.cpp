#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int x , k; cin >> x >> k;
		if (x % k != 0) {
			cout << 1 << '\n' << x << '\n';
		} else {
			cout << 2 << '\n' << x-1 << " " << 1 << '\n';
		}
	}


	return 0;
}