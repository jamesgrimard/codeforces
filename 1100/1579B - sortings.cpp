	// github.com/jamesgrimard/codeforces
	#include <bits/stdc++.h>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

		int tt; cin >> tt;
		while (tt--) {
			int n; cin >> n;
			vector<int> a(n);
			vector<vector<int>> g;
			for (int i=0;i<n;i++) cin >> a[i];
			vector<bool> ref(n);
			int cnt = 0;
			for (int i=0;i<n-1;i++) {
				int mn = a[i] , index = i;
				for (int j=n-1;j>i;j--) {
					if (a[j] < mn && ref[j] != 1) {
						mn = a[j]; index = j;
					}
				}
				vector<int> tmp = {i+1,index+1,index-i};
				ref[index] = 1;
				if (index != i) {
					cnt++;
					g.push_back(tmp);
					for (int l=index;l>i;l--) {swap(a[l],a[l-1]);swap(ref[l],ref[l-1]);}
				}
			}

			cout << cnt << '\n';
			for (int i=0;i<size(g);i++) cout << g[i][0] << " " << g[i][1] << " " << g[i][2] << '\n';
		}

		return 0;
	}

