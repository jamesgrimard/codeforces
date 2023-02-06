// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k;
	cin >> n >> k;

	int mx = 0;
	for (int i=0;i<n;i++) {

		int fi,ti;
		cin >> fi >> ti;

		if (fi > mx) {
			if (ti <= k) {
				if (mx < fi || i == 0) mx = fi;
			} else {
				if (mx < (fi - (ti - k)) || i == 0) mx = (fi - (ti - k));
			}
		}
	}

	cout << mx << '\n';

	return 0;
}