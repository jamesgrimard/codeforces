// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			(i == 0) ? a[i] = x : a[i] = a[i-1] + x;
		}
		long long mx = 0;
		for (int i=0;i<n-1;i++) {
			
			mx = max(gcd(a[i],a[n-1]-a[i]),mx);
			
		}
		cout << mx << '\n';
		
	}

	return 0;
}

