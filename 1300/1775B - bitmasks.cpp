// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		vector<vector<int>> r(n);
		bool ans = 0;
		for (int i=0;i<n;i++) {
			int q; cin >> q;
			r[i].resize(q);
			for (int j=0;j<q;j++) {
				cin >> r[i][j];
				m[r[i][j]]++;
			}
		}
		for (int i=0;i<n;i++) {
			bool f = 1;
			for (int j=0;j<r[i].size();j++) {
				if (m[r[i][j]] == 1) f= 0;
			}
			if (f) ans = 1;
		}

		ans == 1 ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;	
}

		