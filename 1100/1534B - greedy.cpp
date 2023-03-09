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
		long long cnt = 0;
		if (n == 1) {
			cout << a[0] << '\n';
			continue;
		}
		for (int i=0;i<n;i++) {
			if (i == 0 && a[i] > a[i+1]) {
				cnt += (a[i]-a[i+1]);
				a[i] = a[i+1];
			}
			if (i == n-1 && a[i] > a[i-1]) {
				cnt += (a[i]-a[i-1]);
				a[i] = a[i-1];
			}
			if (a[i] > a[i-1] && a[i] > a[i+1] && i != 0 && i != n-1) {
				cnt += (a[i]-max(a[i-1],a[i+1]));
				a[i] = max(a[i+1],a[i-1]);
			}
		}
		for (int i=0;i<n;i++) {
			if (i == 0) {cnt += a[i]; continue;}
			cnt += abs(a[i]-a[i-1]);
			if (i == n-1) cnt += a[i];
		}
		cout << cnt << '\n';
	}

	return 0;
}

