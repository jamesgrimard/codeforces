// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int h, w, y, x, d; cin >> h >> w >> y >> x >> d;
		if ((y+d < h && x-d > 1) || (y-d > 1 && x+d < w)) {
			cout << ((h-1) + (w-1)) << '\n';
		} else {
			cout << -1 << '\n';
		}
	}


	return 0;
}

