// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int t;
	cin >> t;

	vector<vector<int>> a(t);

	for (int i=0;i<t;i++) {
		a[i].resize(t);
		for (int j=0;j<t;j++) {
			cin >> a[i][j];
		}
	}

	bool ans = false;
	for (int i=0;i<t;i++) {
		for (int j=0;j<t;j++) {
			if (a[i][j] != 1) {
				for (int r=0;r<t;r++) {
					for (int c=0;c<t;c++) {
						if ((r != i) && (c != j)) {
							if (a[i][c] + a[r][j] == a[i][j]) {
								ans = true;
								goto out;
							}
						}
					}
				}
			} else {
				continue;
			}
			ans = false;
			goto out2;
			out: {};
		}
	}
	out2: {};
	cout << ((ans == true) || ((t==1) && (a[0][0] == 1)) ? "Yes" : "No") << endl;
}