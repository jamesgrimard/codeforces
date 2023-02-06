// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n,k; cin >> n >> k;

		cout << ((n/k*k) + min(n%k,k/2)) << '\n';
	}


	return 0;
}
