// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int mx = 0, mn = 0 , mnc = 0, mxc = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x > mx) {
			mx = x;
			mxc = 0;
		}
		if (x < mn || i == 0) {
			mn = x;
			mnc = 0;
		} 
		if (x == mx) mxc++;
		if (x == mn) mnc++;
	}

	(mx != mn) ? cout << (n-mxc-mnc) : cout << 0;

	return 0;
}
