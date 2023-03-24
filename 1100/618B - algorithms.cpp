// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	int index = 0;
	vector<vector<int>> a(n,vector<int>(n));
	for (int i=0;i<n;i++) {
		int mx = 0;
		for (int j=0;j<n;j++) {
			cin >> a[i][j];
			mx = max(a[i][j] , mx);
		}
		if (mx == n-1) index = i;
	}

	for (int j=0;j<n;j++) {
		if (a[index][j] == 0) {
			cout << n << " ";
			continue;
		}
		cout << a[index][j] << " ";
	}
	

	return 0;
}

