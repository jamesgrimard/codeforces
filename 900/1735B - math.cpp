// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		int tally = 0 , l = 0;

		for (int i=0;i<n;i++) {
			int x ; cin >> x;
			if (i == 0) l = x;

			if (x >= l*2) {
				tally += (x / (l*2-1));
				if (x % (l*2-1) == 0) tally--;
			}
		}
		
		cout << tally << '\n';
		
		
	}
	return 0;
}

