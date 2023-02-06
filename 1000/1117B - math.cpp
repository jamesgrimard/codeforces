// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k , m; cin >> n >> k >> m;
	long long mx = 0 , mx_ = 0;
	for (int i=0;i<n;i++) {
		long long x ; cin >> x;
		if (x >= mx) {
			mx_ = mx;
			mx = x;
		} else if (x < mx && x > mx_) {
			mx_ = x;
		}
	}

	long long strct = m*mx + mx_;

	long long ans = k / (m+1) * strct;
	ans += ((k%(m+1)) * mx);

	cout << ans ;

	return 0;
}