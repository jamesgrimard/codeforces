// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		long long n , k ; cin >> n >> k;
		long long p = min(n-1,k);
		long long ans = (p * p + p) / 2LL;
		if (k > n-1) ans++;
		cout << ans << '\n';
	}

	return 0;
}