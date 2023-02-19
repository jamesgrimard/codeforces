// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	int k = 2 * n + 1;
	vector<vector<int>> a(n+1);
	for (int i=0;i<=n;i++) {
		a[i].resize(k);
		for (int j=0;j<i;j++) {
			a[i][n-j] = i - j;
		}
	}


	for (int i=0;i<size(a);i++) {
		for (int j=0;j<size(a);j++) {
			if (j < n-i) {
				cout << "  ";
				continue;
			}
			if (j == size(a)-1) {
				cout << a[i][j];
				continue;
			}
			cout << a[i][j] << " ";
		}
		for (int j=size(a)-2;j>=0;j--) {
			if (j < n-i) {
				continue;
			}

			cout << " " << a[i][j];
		}
		cout << '\n';
	}
	for (int i=size(a)-2;i>=0;i--) {
		for (int j=0;j<size(a);j++) {
			if (j < n-i) {
				cout << "  ";
				continue;
			}
			if (j == size(a)-1) {
				cout << a[i][j];
				continue;
			}
			cout << a[i][j] << " ";
		}
		for (int j=size(a)-2;j>=0;j--) {
			if (j < n-i) {
				continue;
			}
			if (j == size(a)-1) {
				cout << a[i][j];
				continue;
			}
			cout << " " << a[i][j];
		}
		cout << '\n';
	}

	return 0;
}

