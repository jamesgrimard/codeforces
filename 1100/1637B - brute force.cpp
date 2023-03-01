// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int cnt = 0;
		for (int i=0;i<n;i++) {
			for (int j=i;j<n;j++) {
				for (int k=i;k<=j;k++) {
					if (a[k] == 0) cnt++;
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

