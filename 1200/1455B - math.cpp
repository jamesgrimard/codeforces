// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {

		long long k; cin >> k;

		long long jumps = 0;
		long long x = 0;

		while (x < k) {
			jumps++;
			x += jumps;
		} 
		(x - k == 1) ? cout << jumps + 1LL : cout << jumps;
		cout << '\n';
	}



	return 0;
}