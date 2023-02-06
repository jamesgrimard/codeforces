// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long k , last; cin >> k >> last;
		cout << 9 * (k-1) + last << '\n';
	}


	return 0;
}