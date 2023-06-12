// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		long long k,x; cin >> k >> x;
		if (k*k <= x) {
			cout << 2*k-1 << '\n';
		} else {
			long long l = 1, r = 2*k-1 , m , cnt = 0;
			while (l<=r) {
				m = (l+r)/2;
				if (m <= k) {
					cnt = (m*m+m)/2LL;
				} else {
					cnt = (k*k+k)/2LL;
					long long base = ((k-1)*(k-1)+(k-1))/2LL , section = (k-1) - (m - k);
					cnt += (base - ((section*section+section)/2LL));
				}
				if (cnt >= x) r = m - 1;
				if (cnt < x) l = m + 1;
			}		
			cout << l << '\n';
		}
	}

	return 0;	
}