// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		int z = 0 , o = 0;

		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 0) z++; if (x == 1) o++;
		}

		long long ans = pow(2,z)*o;
		
		cout << ans << '\n';
		

	}

	return 0;
}

