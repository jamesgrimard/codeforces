// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int h, w , x, y; cin >> h >> w >> x >> y;
		vector<vector<char>> a(h);
		for (int i=0;i<h;i++) {
			a[i].resize(w);
			for (int j=0;j<w;j++) cin >> a[i][j];
		}
		bool flag = 1;
		if (2*x <= y) flag = 0;
		int c2 = 0 , c1 = 0;
		for (int i=0;i<h;i++){
			for (int j=0;j<w;j++){
				if (a[i][j] == '.') {
					if (j != w-1 && a[i][j+1] == '.' && flag == 1) {
						c2++; j++;
					} else {
						c1++;
					}
				}
			}
		}
		cout << (c1*x + c2*y) << '\n';
	}

	return 0;
}
