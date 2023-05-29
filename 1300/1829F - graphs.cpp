// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n, m; cin >> n >> m;
		vector<pair<int,int>> p(m);
		vector<int> a(n+1);
		for (int i=0;i<m;i++) {
			cin >> p[i].first >> p[i].second;
			a[p[i].first]++ , a[p[i].second]++;
		}
		int leaf,parent,grandparent;
		for (int i=1;i<=n;i++) if (a[i] == 1) leaf = i;
		for (int i=0;i<m;i++) {
			if (p[i].first == leaf) {
				parent = p[i].second;
			} else if (p[i].second == leaf) {
				parent = p[i].first;
			}
		}
		for (int i=0;i<m;i++) {
			if (p[i].first == parent && a[p[i].second] != 1) {
				grandparent = p[i].second;
			} else if (p[i].second == parent && a[p[i].first] != 1) {
				grandparent = p[i].first;
			}
		}
		cout << a[grandparent] << " " << a[parent] - 1 << '\n';
	}

	return 0;	
}

		