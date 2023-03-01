// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(rbegin(a),rend(a));
		for (int i=1;i<n;i++) a[i] += a[i-1];
		for (int i=0;i<k;i++) {
			int x; cin >> x;
			int q = n - 1, p = 0 , ans = -1;
			while (a[q] > x && q > 0) {
				q /= 2;
			}
			while (q+p*2 < n && a[q+p*2] < x) {
				(p == 0) ? p=1 : p *= 2;
			}
			for (int j=q+p;j<n;j++) {
				if (a[j] >= x) {
					ans = j+1;
					break;
				}
			}
			cout << ans << '\n';
		}
	}

	return 0;
}

