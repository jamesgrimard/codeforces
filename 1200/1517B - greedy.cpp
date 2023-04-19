// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n , m ;  cin >> n >> m;
		vector<vector<pair<int,bool>>> a(n,vector<pair<int,bool>>(m));
		vector<int> b;
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				cin >> a[i][j].first;
				b.push_back(a[i][j].first);
			}
		}
		sort(begin(b),end(b));
		for (int i=0;i<m;i++) {
			for (int h=0;h<n;h++) {
				for (int w=0;w<m;w++) {
					if (b[i] == a[h][w].first && a[h][w].second == 0) {
						a[h][w].second = 1;
						swap(a[h][i],a[h][w]);
						goto out;
					}
				}
			}
			out: continue;
		}
		for (int i=0;i<n;i++) {
			for (auto v:a[i]) cout << v.first << " ";
			cout << '\n';
		}
	}

	return 0;
}