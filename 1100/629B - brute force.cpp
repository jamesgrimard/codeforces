// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<vector<int>> a(n,vector<int>(367));

	for (int i=0;i<n;i++) {
		char c; cin >> c;
		int l , r; cin >> l >> r;
		for (int j=l;j<=r;j++) {
			(c == 'M') ? a[i][j] = 1 : a[i][j] = 2;
		}
	}

	int mx = 0;

	for (int i=1;i<=366;i++) {
		int M = 0 , F = 0;
		for (int j=0;j<n;j++) {
			if (a[j][i] == 1) M++;
			if (a[j][i] == 2) F++;
		}
		mx = max(mx,min(M,F));
	}

	cout << mx * 2;


	return 0;
}

