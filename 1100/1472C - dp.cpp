// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n) , b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int mx = 0;
		for (int i=0;i<n;i++) {
			int k = i+1;
			while (k <= n && b[k-1] != 1) {
				b[k-1] = 1;
				k += a[k-1];
			}
			mx = max(mx,k-(i+1));
		}
		cout << mx << '\n';
	}

	return 0;
}

