// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i != 0) a[i] += a[i-1];
	}

	int m; cin >> m;

	int ans = -1;

	for (int i=0;i<m;i++) {
		int l,r; cin >> l >> r;
		if (a[n-1] <= r) {
			ans = max(a[n-1],l);
			break;
		}
	}

	cout << ans;

	return 0;
		
}

