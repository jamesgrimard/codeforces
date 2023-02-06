// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		vector<int> a(2) , b(2);

		for (int i=0;i<2;i++) cin >> a[i];
		for (int i=0;i<2;i++) cin >> b[i];

		sort(begin(a),end(a)); sort(begin(b),end(b));

		bool ans = false;

		for (int i=0;i<2;i++) {
			if (a[i] == b[i]) {
				if (i == 0) {
					if (a[i+1] + b[i+1] == a[i]) ans = true;
				} else {
					if (a[i-1] + b[i-1] == a[i]) ans = true;
				}
			}
		}

		(ans == true) ? cout << "Yes" : cout << "No";

		cout << '\n';

	}	


	return 0;
}

