// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int y,x; cin >> y >> x;
		vector<vector<int>> a(y) , b(x);
		vector<int> ref(y*x+1);
		for (int i=0;i<y;i++) {
			a[i].resize(x);
			for (int j=0;j<x;j++) {
				cin >> a[i][j];
				ref[a[i][j]] = i;
			}
		}
		for (int i=0;i<x;i++) {
			b[i].resize(y);
			for (int j=0;j<y;j++) cin >> b[i][j];
		}
		for (int i=0;i<y;i++) {
			for (int j=0;j<x;j++) {
				cout << a[ref[b[0][i]]][j] << " ";
			}
			cout << '\n';
		}
	}
	
	return 0;
}

