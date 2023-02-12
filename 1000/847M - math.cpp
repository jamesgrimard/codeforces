// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int d = 0 , p = 0; 
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == 1) d = x - p;
		if (i > 1 && p + d != x) ans = 0;
		p = x;
		if (i == n-1) {
			(ans == 0) ? cout << x : cout << p + d;
		}
	}


	return 0;
}



