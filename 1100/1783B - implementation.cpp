// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<vector<int>> a(n);
		int l = 1 , r = n*n;
		for (int i=0;i<n;i++) {
			a[i].resize(n);
			if (i % 2 == 0) {
				for (int j=0;j<n;j++) {
					if (j % 2 == 0) {
						a[i][j] = l;
						l++;
					} else {
						a[i][j] = r;
						r--;
					}
				}	
			} else {
				for (int j=n-1;j>=0;j--) {
					if (j % 2 == 0) {
						a[i][j] = r;
						r--;
					} else {
						a[i][j] = l;
						l++;
					}
				}
			}
		}
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) cout << a[i][j] << " ";
			cout << '\n';
		}
	}

	return 0;
}

