// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		int a,b,c;
		cin >> a >> b >> c;

		while (a > 0 && (b + c) > 0) {
			if (a >= 20 && b > 0) {
				a = a / 2 + 10;
				b--;
			} else if (c > 0) {
				a -= 10;
				c--;
			} else {
				a = a / 2 + 10;
				b--;
			}
		}

		(a <= 0) ? cout << "YES" : cout << "NO";

		cout << '\n';

	}

	return 0;
}

