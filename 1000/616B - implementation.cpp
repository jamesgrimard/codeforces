// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y , x; cin >> y >> x;
	int mx = 0;
	for(int i=0;i<y;i++) {
		int mn = 1000000000;
		for (int j=0;j<x;j++) {
			int k; cin >> k;
			mn = min(k,mn);
		}
		if (mn > mx) {
			mx = mn;
		}
	}

	cout << mx;

	return 0;
}
