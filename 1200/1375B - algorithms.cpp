// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int h , w; cin >> h >> w;
		vector<vector<int>> a(h,vector<int>(w));
		bool f = 1;
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {
				cin >> a[i][j];
				if ((i == 0 && j == 0 )|| (i == 0 && j == w-1) || (i == h-1 && j == 0) || (i == h-1 && j == w-1)) {
					if (a[i][j] > 2) f = 0;
					a[i][j] = 2;
				} else if (j == 0 || j == w-1 || i == 0 || i == h-1) {
					if (a[i][j] > 3) f = 0;
					a[i][j] = 3;
				} else {
					if (a[i][j] > 4) f = 0;
					a[i][j] = 4;
				}
			}
		}
		if (f == 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (int i=0;i<h;i++) {
				for (int j=0;j<w;j++) cout << a[i][j] << " ";
				cout << '\n';
			}
		}
	}

	return 0;
}