// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int xa , ya , xb , yb , xc , yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;

	if ((xb > xa && xc < xa) || (xc > xa && xb < xa) || (yb > ya && yc < ya) || (yc > ya && yb < ya)) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}



