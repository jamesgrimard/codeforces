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

		int l= 0;
		
		while (n != 0) {
			if (n / 10 == 0) break;
			n /= 10;
			l++;
		}

		n = (10 * l) + n - l;

		cout << n << '\n';
	}

	return 0;
}