// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		int tally = 0, count = 0;

		for (int i=0;i<n;i++){
			int x; cin >> x;

			if (x == 0) {
				if (tally > 0) count++;
				tally = 0;
				continue;
			}
			tally++;
			if (i == n-1 && tally > 0) count++;
		}	

		cout << min(count,2) << '\n';
	}


	return 0;
}

