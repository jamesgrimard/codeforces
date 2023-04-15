// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int h, w; cin >> h >> w;
		vector<string> a(h);
		for (int i=0;i<h;i++) cin >> a[i];
		for (int j=0;j<w;j++) {

			int block = h-1;
			for (int i=h-1;i>=0;i--) {
				if (i == h-1) {
					if (a[i][j] == '.') block = h;
					continue;
				}
				if (a[i][j] == '*') {
					a[i][j] = '.';
					a[block-1][j] = '*';
					block--;
				}
				if (a[i][j] == 'o') block = i;
			}

		}
		for (auto v:a) cout << v << '\n';
	}


	return 0;
}