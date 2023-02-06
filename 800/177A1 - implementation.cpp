// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,sum(0);
	cin >> tt;

	vector<vector<int>> a(tt);
	for (int i=0; i<tt; i++) {
		a[i].resize(tt);
		for (int j=0; j<tt;j++) {
			cin >> a[i][j];
			if (i == tt/2) {
				sum += a[i][j];
			}
			if (j == tt/2) {
				sum += a[i][j];
			}
			if (i == j) {
				sum += a[i][j];
			}
			if ((i == tt-1-j) && (j == tt-1-i)) {
				sum += a[i][j];
			}
		}
	}

	cout << (sum - (3*a[tt/2][tt/2])) << '\n';

	return 0;
}