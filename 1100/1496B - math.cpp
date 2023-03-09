// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n, K; cin >> n >> K;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		int mex = n;
		for (int i=0;i<n;i++) {
			if (i != a[i]) {
				mex = i;
				break;
			}
		}
		if (mex == n || K == 0) {
			cout << n + K << '\n';
		} else {
			int k = (a[n-1] + mex) / 2;
			if ((a[n-1] + mex) % 2 != 0) k++;
			int ans = n;
			for (int i=0;i<n;i++) {
				if (a[i] == k) break;
				if (a[i] > k) {
					ans++;
					break;
				}
			}
			cout << ans << '\n';
		}
	}

	return 0;
}

