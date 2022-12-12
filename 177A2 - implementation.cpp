// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt, sum(0);
	cin >> tt;

	for (int i=0;i<tt;i++) {
		for (int j=0;j<tt;j++) {
			int x; cin >> x;
			if ((i == j) || (i == tt/2) || (j == tt/2) || ((j == tt-1-i) && (i == tt-1-j))) sum += x;
		}
	}

	cout << sum << '\n';

	return 0;
}