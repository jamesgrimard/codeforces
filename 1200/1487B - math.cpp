// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		if (n % 2 == 0) {
			(k % n == 0) ? cout << n : cout << k % n;
		} else {
			int p = ceil((double)k/(double)(n/2));
			p = p - 1 + k;
			(p % n == 0) ? cout << n : cout << p % n;
		}
		cout << '\n';
	}

	return 0;
}