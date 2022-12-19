// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int r,c,y,x;
		cin >> r >> c >> y >> x;

		(y - 1 >= r - y) ? y = 1 : y = r;
		(x - 1 >= x - c) ? x = 1 : x = c;

		cout << y << " " << x << " ";

		(y == 1) ? y = r : y = 1;
		(x == 1) ? x = c : x = 1;

		cout << y << " " << x;
		cout << '\n';
	}

	return 0;
}