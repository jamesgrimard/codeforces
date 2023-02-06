// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	int x = ceil(sqrt(tt))-1 , y = floor(sqrt(tt));

	while ((x * y) <= tt) {
		x++;
		if (x * y < tt) continue;
		if (x * y > tt) {
			y--;
			continue;
		}
		if (x * y == tt) break;
	}

	cout << ((x * 2) + (y * 2)) << '\n';

	return 0;
}