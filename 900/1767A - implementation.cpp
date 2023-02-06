// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		vector<int> x(3);
		vector<int> y(3);

		for(int i=0;i<3;i++){
			cin >> x[i] >> y[i];
		}

		bool ans = true;

		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++){
				if (i != j && x[i] == x[j]) {
					for (int k=0;k<3;k++) {
						if (k != i && k != j && (y[k] == y[i] || y[k] == y[j])) {
							ans = false;
						}
					}
				}
			}

			for (int j=0;j<3;j++){
				if (i != j && y[i] == y[j]) {
					for (int k=0;k<3;k++) {
						if (k != i && k != j && (x[k] == x[i] || x[k] == x[j])) {
							ans = false;
						}
					}
				}
			}
		}

		(ans == true) ? cout << "YES" : cout << "NO";

		cout << '\n';
	}

	return 0;
}