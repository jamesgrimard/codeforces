// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<vector<int>> a(n);
	for (int i=0;i<n;i++) {
		a[i].resize(4);
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	}
	int ans = 1 , p = 1000;
	for (int i=0;i<n;i++) {		
		bool f = 0;
		for (int j=0;j<n;j++) {
			if (i == j) continue;
			if (a[i][0] < a[j][0] && a[i][1] < a[j][1] && a[i][2] < a[j][2]) f = 1;
		}
		if (a[i][3] < p && f == 0) {
			p = a[i][3]; ans = i+1;
		}
	}

	cout << ans ;

	return 0;
}

