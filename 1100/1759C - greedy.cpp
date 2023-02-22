// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int bottom,top,x; cin >> bottom >> top >> x;
		int a,b; cin >> a >> b;

		if (a == b) {
			cout << 0 << '\n';
			continue;
		}

		if (abs(a-b) < x && ((abs(b-top) < x && abs(b-bottom) < x) || (abs(a-bottom) < x && abs(a-top) < x))) {
			cout << -1 << '\n';
			continue;
		}

		if (abs(a-b) >= x) {
			cout << 1 << '\n';
		} else if ((abs(bottom-a) >= x && abs(bottom-b) >= x) || (abs(top-a) >= x && abs(top-b) >= x)) {
			cout << 2 << '\n';
		} else {
			cout << 3 << '\n';
		}
	}


	return 0;
}

