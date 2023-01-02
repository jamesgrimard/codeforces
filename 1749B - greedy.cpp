// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		int max = 0 ;
		long long total = 0;

		for (int i=0;i<n;i++) {
			int x; cin >> x; 
			total += x;
		}
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x > max) max = x;
			total += x;
		}

		total -= max;

		cout << total << '\n';

	}

	return 0;
}

