// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int q = n / 2 , p = k / (q+1);
		if (k % (q+1) != 0) p++;
		((n - q) - p >= 0) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

