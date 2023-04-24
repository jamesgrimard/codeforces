// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		long long sum = 1 , r = 2 , cnt = 0;
		while (sum <= n) {
			n -= sum;
			cnt++;
			sum = sum * 2 + r*r;
			r <<= 1;
		}
		cout << cnt << '\n';
	}

	return 0;
}