// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<vector<int>> a(n);
		for (int i=0;i<n;i++) {
			a[i].resize(n-1);
			for (int j=0;j<n-1;j++) cin >> a[i][j];
		}
		int k = 0;
		(a[0][0] == a[1][0] || a[0][0] == a[2][0]) ? k = a[0][0] : k = a[1][0];
		for (int i=0;i<n;i++) {
			if (a[i][0] != k) {
				cout << k;
				for (int j=0;j<n-1;j++) {
					cout << " " << a[i][j];
				}
				break;
			}
		}
		cout << '\n';
	}

	return 0;
}