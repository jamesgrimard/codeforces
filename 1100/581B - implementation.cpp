// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n) , b(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int mx = 0;
	for (int i=n-1;i>=0;i--) {
		if (a[i] > mx) {
			mx = a[i];
			b[i] = mx;
		} else {
			b[i] = mx + 1;
		}
	}
	for (int i=0;i<n;i++) cout << b[i] - a[i] << " ";


	return 0;
}

