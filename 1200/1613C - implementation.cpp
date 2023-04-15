// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		long long sum = 0 , ans = 0;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n-1;i++) a[i] = a[i+1] - a[i];
		a[n-1] = k;
		sort(begin(a),end(a));
		for (int i=0;i<n;i++) {
			ans = k/(n-i);
			if (k % (n-i) != 0) ans++;
			if (ans <= a[i] && ans != 0) break;
			
			k -= a[i];
			if (i == n-1) ans = k;
		}
		cout << ans << '\n';
	}


	return 0;
}