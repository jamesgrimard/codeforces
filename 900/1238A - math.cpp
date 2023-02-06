// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		long long x,y; cin >> x >> y;

		(x - y == 1) ? cout << "NO" : cout << "YES";

		cout << '\n';		
	}

	return 0;
}
