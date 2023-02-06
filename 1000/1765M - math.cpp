// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		for (int i=2;i<=sqrt(n)+1;i++){
			if (n%i == 0) {
				cout << (n/i) << " " << (n - (n/i)) << '\n'; break;
			}
			if (i == (int) sqrt(n)+1) cout << 1 << " " << (n-1) << '\n';

		}
	}


	



	return 0;
}

