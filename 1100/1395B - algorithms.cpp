// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h , w , y , x; cin >> h >> w >> y >> x;

	int r = y , c = x;

	while (c >= 1) {
		cout << r << " " << c << '\n';
		c--;
	}
	c = x + 1;
	while (c <= w) {
		cout << r << " " << c << '\n';
		c++;
	}
	c = w;

	r = y + 1;
	while (r <= h) {
		bool f = 0;
		while (c > 1) {
			f = 1;
			cout << r << " " << c << '\n';
			c--;
			if (c == 1) {
				cout << r << " " << c << '\n';
				r++;
			}
		}

		while (c < w && f == 0) {
			cout << r << " " << c << '\n';
			c++;
			if (c == w) {
				cout << r << " " << c << '\n';
				r++;
			}
		}

	}

	r = y - 1;

	while (r >= 1) {
		bool f = 0;
		while (c > 1) {
			f = 1;
			cout << r << " " << c << '\n';
			c--;
			if (c == 1) {
				cout << r << " " << c << '\n';
				r--;
			}
		}

		while (c < w && f==0) {
			cout << r << " " << c << '\n';
			c++;
			if (c == w) {
				cout << r << " " << c << '\n';
				r--;
			}
		}
	}
	
	return 0;
}

