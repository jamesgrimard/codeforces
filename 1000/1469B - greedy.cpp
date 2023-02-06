// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int m ; cin >> m;
		vector<int> b(m);
		for (int i=0;i<m;i++) cin >> b[i];
		int mx1 = a[0], mx2 = b[0];
		for (int i=1;i<n;i++) {
			a[i] = a[i-1] + a[i];
			mx1 = max(mx1,a[i]);
		}
		for (int i=1;i<m;i++) {
			b[i] = b[i-1] + b[i];
			mx2 = max(mx2,b[i]);
		}
		cout << max(0, max(max(mx1,mx2),mx1+mx2)) << '\n';		
	}

	return 0;
}
