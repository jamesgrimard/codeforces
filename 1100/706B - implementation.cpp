// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(100001);
	int mx = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x] -= 1;
		mx = max(x,mx);
	}
	for (int i=1;i<=mx;i++) {
		if (a[i] < 0) {
			a[i] = a[i-1] + abs(a[i]);
		} else {
			a[i] = a[i-1];
		}
	}
	int m; cin >> m;
	for (int i=0;i<m;i++) {
		int x; cin >> x;
		if (x > mx) {
			cout << n << '\n';
			continue;
		}
		cout << a[x] << '\n';
	}

	return 0;
}

