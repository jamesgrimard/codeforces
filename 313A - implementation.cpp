// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long x;
	cin >> x;

	if (x >= 0) {
		cout << x;
		return 0;
	}

	if (abs(x / 10 % 10) > abs(x % 10)) {
		x = x / 100 * 10 + (x % 10);
	} else {
		x /= 10;
	}

	cout << x;

	return 0;
}

