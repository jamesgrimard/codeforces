// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int x ,y ; cin >> x >> y;
		int k = x * y / 3;
		if ((x*y) % 3 != 0) k++;
		cout << k << '\n';
	}


	return 0;
}
