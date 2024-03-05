#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int odd = 1e9 , even = 1e9;
		bool ans = 1;
		for (int i=1;i<n;i++) {
			(a[i-1] % 2 == 0) ? even = min(even,a[i]) : odd = min(odd,a[i]);
			if ((a[i] % 2) != (a[0] % 2)) {
				if (a[i] % 2 == 0) {
					if (a[i] < odd) ans = 0;
				} else {
					if (a[i] < odd) ans = 0;
				}
			}
		}
		(ans) ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;
}