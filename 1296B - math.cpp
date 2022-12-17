// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		double x;
		cin >> x;

		double f = 1.0 / 9.0 * 10.0;

		cout << int(x * f) << '\n';
	}

	return 0;
}

