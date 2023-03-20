// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	
	int n , m; cin >> n >> m;
	vector<vector<int>> a(n);
	for (int i=0;i<n;i++) {
		a[i].resize(m);
		for (int j=0;j<m;j++) cin >> a[i][j];
	}
	for (int j=m-2;j>=1;j--) {
		for (int i=n-2;i>=1;i--) {
			if(a[i][j] == 0) a[i][j] = min(a[i+1][j],a[i][j+1]) - 1;
		}
	}
	int sum = 0;
	for (int i=n-1;i>=0;i--) {
		for (int j=m-1;j>=0;j--) {
			sum += a[i][j];
			if (j == m-1 && i > 0) {
				if (a[i][j] <= a[i-1][j]) {
					sum = -1;
					goto out;
				}
			}
			if (i == n-1 && j > 0) {
				if (a[i][j] <= a[i][j-1]) {
					sum = -1;
					goto out;
				}
			}
			if (i == n-1 || j == m-1) continue;
			if (a[i][j] >= a[i][j+1] || a[i][j] >= a[i+1][j])  {
				sum = -1;
				goto out;
			}
		}
	}
	out: cout << sum << '\n';
	

	return 0;
}

