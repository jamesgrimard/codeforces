// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		long long a,b,c,d; cin >> a >> b >> c >> d;

		long long x = a * d , y = b * c;

		if (x == y) {
			cout << "0\n";
		} else {
			if (x < y) swap(x,y);
			if (x == 0 || y == 0) {
				cout << "1\n";
			} else if (x % y == 0) {
				cout << "1\n";
			} else {
				cout << "2\n";
			}
		}
	}

	return 0;
}

