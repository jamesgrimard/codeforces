// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}

		int min;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if ((a[i] & a[j]) < min || i == 0 && j == 0) min = (a[i] & a[j]);
				a[i] &= a[j];
			}
		}

		cout << min << '\n';
	}

	return 0;
}