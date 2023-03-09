// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin>> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		int mn = 0 , mx = 1;
		for (int i=1;i<n;i++) {
			if (i == 1) mn = a[i]-a[i-1];
			mn = min(a[i]-a[i-1],mn);
			if (a[i] <= mn) mx = i+1;
		}
		cout << mx << '\n';
	}

	return 0;
}

