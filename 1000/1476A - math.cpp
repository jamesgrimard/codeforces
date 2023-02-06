// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		if (k >= n) {
			int o = k/n;
			if (k % n != 0) o++;
			cout << o;	
		} else {
			(n % k == 0) ? cout << 1 : cout << 2;
		}
		cout << '\n';
	}


	return 0;
}
