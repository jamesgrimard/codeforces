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
		sort(begin(a),end(a));
		for (int i=1;i<n;i++) a[i] += a[i-1];
		bool ans = 0;
		for (int i=0;i<n;i++) {
			if (a[i] < 2048) continue;
			for (int j=0;j<n;j++) {
				if (a[j] == 2048 || a[i]-a[j] == 2048) {
					ans = 1; goto out;
				}
			}
		}
		out: (ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}


