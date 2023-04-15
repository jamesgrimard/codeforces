// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int h,w; cin >> h >> w;
		vector<string> a(h);
		for (int i=0;i<h;i++) cin >> a[i];
		if (h == 1 || w == 1) {
			cout << "YES\n";
			continue;
		}
		bool ans = 1;
		for (int i=0;i<h-1;i++) {
			for (int j=0;j<w-1;j++) {
				int cnt = 0;
				if (a[i][j] == '1') cnt++;
				if (a[i][j+1] == '1') cnt++;
				if (a[i+1][j] == '1') cnt++;
				if (a[i+1][j+1] == '1') cnt++;
				if (cnt == 3) ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}