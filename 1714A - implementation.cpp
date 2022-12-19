// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int n , H , M;
		cin >> n >> H >> M;

		vector<vector<int>> a(n);
		for (int i=0;i<n;i++){
			a[i].resize(2);
			cin >> a[i][0] >> a[i][1];
		}

		int total_h = 0 , total_m = 0;

		for (int i=0;i<n;i++) {
			int tmp_h = 0 , tmp_m = 0;
			if (((a[i][0] - H) < 0) || (a[i][0] == H && a[i][1] < M)) {
				tmp_h += (24 - (H+1));
				tmp_m += (60 - M);
				tmp_h += a[i][0];
				tmp_m += a[i][1];
			} else {
				if (a[i][1] < M) {
					tmp_m += (60 - M);
					tmp_m += a[i][1];
					tmp_h += (a[i][0] - (H + 1));
				} else {
					tmp_h = a[i][0] - H;
					tmp_m = a[i][1] - M;
				}
			}
			if ((tmp_h < total_h) || (tmp_h == total_h && tmp_m < total_m) || i == 0) {
				total_h = tmp_h; total_m = tmp_m;
			}
		}

		if (total_m > 59) {
			total_h += (total_m / 60);
			total_m = total_m - 60 * (total_m / 60);
		}
		
		cout << total_h << " " << total_m << '\n';

	}

	return 0;
}