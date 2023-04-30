// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h , w; cin >> h >> w;
	vector<vector<int>> a(h,vector<int>(w)) , b(h,vector<int>(w));
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) cin >> a[i][j];
	}
	vector<int> o;
	for (int i=0;i<h-1;i++) {
		for (int j=0;j<w-1;j++) {
			if (a[i][j] == 1 && a[i+1][j] == 1 && a[i][j+1] == 1 && a[i+1][j+1] == 1) {
				b[i][j] = 1; b[i+1][j] = 1; b[i][j+1] = 1; b[i+1][j+1] = 1;
				o.push_back(i+1);
				o.push_back(j+1);
			}
		}
	}
	bool ans = 1;
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) if (a[i][j] != b[i][j]) ans = 0;
	}
	if (ans) {
		cout << o.size() / 2LL << '\n';
		for (int i=0;i<o.size();i+=2) cout << o[i] << " " << o[i+1] << '\n';
	} else {
		cout << -1 << '\n';
	}

	return 0;
}