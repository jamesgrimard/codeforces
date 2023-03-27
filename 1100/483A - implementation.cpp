// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long l , r; cin >> l >> r;

	if (r-l < 2) {
		cout << -1;
	} else if (r % 2 == 0 || (r-l > 2)) {
		if (r % 2 == 0) {
			cout << r-2 << " " << r-1 << " " << r;
		} else {
			cout << r-3 << " " << r-2 << " " << r-1;
		}
	} else {
		cout << -1;
	}
	
	return 0;
}

