// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int h, w; cin >> h >> w;
		vector<string> a(h);
		for (int i=0;i<h;i++) cin >> a[i];
		int cnt = 0;
		bool f1 = 0 , f2 = 0;
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {
				if (a[i][j] == '1') cnt++;
				if (i < h-1 && j < w-1) {
					int tally = 0;
					if (a[i][j] == '0') tally++;
					if (a[i+1][j] == '0') tally++;
					if (a[i+1][j+1] == '0') tally++;
					if (a[i][j+1] == '0') tally++;
					if (tally == 1) f1 = 1;
					if (tally > 1) f2 = 1;
				}
			}
		}
		if (f2 == 1) {
			cout << cnt << '\n';
		} else if (f1 == 1) {
			cout << cnt - 1 << '\n';
		} else {
			cout << cnt - 2 << '\n';
		}
	}

	return 0;
}