// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		vector<int> a(3);

		int tally = 0;

		for (int i=0;i<3;i++) {
			cin >> a[i];
			if (a[i] > 0) {
				tally++ ; a[i]--;
			}
		}

		sort(rbegin(a),rend(a));

		for (int i=0;i<3;i++){
			for (int j=i+1;j<3;j++){
				if (a[i] > 0 && a[j] > 0) {
					tally++; a[i]--; a[j]--;
				}
			}
		}

		if (a[0] > 0 && a[1] > 0 && a[2] > 0) tally++;

		cout << tally << '\n';

	}

	return 0;
}

