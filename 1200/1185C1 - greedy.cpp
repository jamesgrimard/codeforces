// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	vector<vector<int>> r(n);
	for (int i=0;i<n;i++) {
		r[i].resize(i);
		for (int j=0;j<i;j++) r[i][j] = a[j];
		sort(r[i].rbegin(),r[i].rend());
	}
	for (int i=1;i<n;i++) a[i] += a[i-1];
	for (int i=0;i<n;i++) {
		if (a[i] <= k) {
			cout << 0 << " ";
		} else {
			for (int j=0;j<i;j++) {
				a[i] -= r[i][j];
				if (a[i] <= k) {
					cout << j + 1 << " ";
					break;
				}
			}
		}
	}

	return 0;
}