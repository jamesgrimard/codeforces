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
		
		sort(a.begin(),a.end());

		if (a[0] == a[n-1]) {
			cout << ((n-1LL)*(n-1LL)+(n-1)) << '\n';
			continue;
		}

		long long maxc = 1 , minc = 1;

		for (int i=1;i<n;i++) {
			if (a[i] == a[0]) minc++;
			if (a[n-1-i] == a[n-1]) maxc++;
			if (a[i] != a[0] && a[n-1-i] != a[n-1]) break;
		}
		
		long long ans = maxc * minc * 2LL;

		cout << ans << '\n';
	}

	return 0;
}

