// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		char a[8][8];
		char ans = 'B';
		for (int i=0;i<8;i++){
			int r = 0;
			for (int j=0;j<8;j++){
				cin >> a[i][j];
				if (a[i][j] == 'R') r++;
			}
			if (r == 8) ans = 'R';
		}

		cout << ans << '\n';

	}

	return 0;
}