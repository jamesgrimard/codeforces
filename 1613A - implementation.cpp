// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		float x1 , x2;
		int p1 , p2;
		cin >> x1 >> p1 >> x2 >> p2;

		while (x1 >= 10) {
			x1 /= 10;
			p1++;
		}

		while (x2 >= 10) {
			x2 /= 10;
			p2++;
		}

		if (p1 > p2 || (x1 > x2 && p1 == p2)) {
			cout << ">";
		} else if (p1 < p2 || (x1 < x2 && p1 == p2)) {
			cout << "<";
		} else {
			cout << "=";
		}

		cout << '\n';

	}
	return 0;
}
