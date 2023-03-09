// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		int k = sqrt(n);
		(n % k == 0) ? cout << (k-2) + n/k : cout << (k-2) + n/k + 1;
				
		cout << '\n';
	}

	return 0;
}

