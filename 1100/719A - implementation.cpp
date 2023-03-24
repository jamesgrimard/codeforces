// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int>a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	if (n == 1) {
		if (a[0] == 0) {
			cout << "UP";
		} else if (a[0] == 15) {
			cout << "DOWN";
		} else {
			cout << -1;
		}
	} else if (a[n-1] > a[n-2]) {
		(a[n-1] == 15) ? cout << "DOWN" : cout << "UP";
	} else {
		(a[n-1] == 0) ? cout << "UP" : cout << "DOWN";
	}

	return 0;
}

