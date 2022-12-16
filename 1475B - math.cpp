// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		int n;
		cin >> n;

		int y = (n % 2020);
		int x = (n - y) / 2020 - y;

		(x >= 0 && ((2020*x + 2021*y) == n)) ? cout << "YES" : cout << "NO";

		cout << '\n';

	}

	return 0;
}

