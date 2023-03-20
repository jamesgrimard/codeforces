// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		int X = 0 , Y = 0;
		for (int i=0;i<n;i++) {
			int x,y; cin >> x >> y;
			if (i == 0) Y = y;
			Y = min(y,Y);
			X = max(x,X);
		}
		cout << max(0,X-Y) << '\n';
	}

	return 0;
}

