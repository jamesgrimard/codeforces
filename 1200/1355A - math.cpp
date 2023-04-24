// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n ,k; cin >> n >> k;
		k--;
		while (k--) {
			long long mn = 9 , mx = 0, N = n;
			while (N > 0) {
				mn = min(mn,N%10LL);
				mx = max(mx,N%10LL);
				N /= 10LL;
			}
			n += mn*mx;
			if (mn == 0) break;
		}
		cout << n << '\n';
	}

	return 0;
}