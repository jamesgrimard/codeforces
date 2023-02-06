// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int c , j , n; cin >> c >> j >> n;
		int maxj = min(j,c/n);
		int remaining = j - maxj;
		if (remaining == 0) {
			cout << maxj << '\n';
		} else {
			cout << (maxj - ceil((float)remaining/(float)(n-1))) << '\n';
		}

	}

	return 0;
}
