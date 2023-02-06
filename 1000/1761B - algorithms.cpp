// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int ans = n;
		for (int i=2;i<n;i++) {
			if (a[i-2] != a[i]) break;
			if (i == n-1) ans = n/2+1;
		}
		cout << ans << '\n';
	}
	

	return 0;
}

