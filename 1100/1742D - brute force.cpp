// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		map<int,bool> m;
		int sum = -1;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=n-1;i>=0;i--) {
			if (m[a[i]] == 1) continue;
			m[a[i]] = 1;
			for (int j=n-1;j>=0;j--) {
				if (gcd(a[j],a[i]) == 1) {
					sum = max(sum,j+i+2);
					if (j >= i) {
						goto out;
					}
					break;
				}
			}
		}
		out: cout << sum << '\n';
	}

	return 0;
}

