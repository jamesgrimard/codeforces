// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		bool f= 0 , F = 0; 
		long long sum = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (i > 0 && i < n-1) {
				if (x % 2 == 0) f = 1;
				if (x > 1) F = 1;
				sum += ceil((double)x/2.0);
			}
		}

		if ((n == 3 && f == 1) || (n > 3 && F == 1)) {
			cout << sum;
		} else {
			cout << -1;
		}
		cout << '\n';
	}

	return 0;
}