// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int n, mx = 0;
		cin >> n;

		vector<int> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] > mx) mx = a[i];
		}
		int count = 0;
		for (int i = 0 ; i < n ; i++ ) {
			if (a[i] == mx && ((a[i-1] != mx && i != 0) || (a[i+1] != mx && i != n-1))) {
				cout << (i + 1);
				goto out;
			}
		}
		cout << -1;
		out: cout << '\n';
	}

	return 0;
}