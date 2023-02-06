// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		long long mx = 0 , mn = 0 , u = 0 , l = 0 , count = 0;
		for (int i=0;i<n;i++) {
			long long x; cin >> x;
			if (x <= u && x >= l) {
				mx = max(mx,x);
				mn = min(mn,x);
			} else {
				count++;
				if (i == 0) count = 0;
				mn = x; mx = x;
			}
			l = mx - (2*k);
			u = mn + (2*k);
		}
		cout << count << '\n';
	}

	return 0;
}

