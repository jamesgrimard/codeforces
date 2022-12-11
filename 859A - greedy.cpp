// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,mx(0);
	cin >> tt;

	for (int i=0;i<tt;i++) {
		int x;
		cin >> x;
		if (x > mx) mx = x;
	}

	(mx <= 25) ? cout << 0 : cout << (mx - 25);

	return 0;
}