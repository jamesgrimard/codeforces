// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {

		int h,w; cin >> h >> w;

		vector<vector<int>> a(h);

		for (int i=0;i<h;i++) {
			a[i].resize(w);
			for (int j=0;j<w;j++) cin >> a[i][j];
		}

		int mx = 0;
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {

				int y = i , x = j , sum = a[i][j];

				while (y < h && x < w) {
					sum += a[y][x];
					y++; x++;
				}
				y=i;x=j;
				while (y < h && x >= 0) {
					sum += a[y][x];
					y++; x--;
				}
				y=i;x=j;
				while (y >= 0 && x < w) {
					sum += a[y][x];
					y--; x++;
				}
				y=i;x=j;
				while (y >= 0 && x >= 0) {
					sum += a[y][x];
					y--; x--;
				}

				mx = max(mx,sum-a[i][j]*4);
			}
		}
		cout << mx << '\n';
	}


	return 0;
}
