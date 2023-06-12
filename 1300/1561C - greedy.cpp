// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<vector<int>> a(n,vector<int>(2));
		for (int i=0;i<n;i++) {
			int m; cin >> m;
			a[i][1] = m;
			for (int j=0;j<m;j++) {
				int x; cin >> x;
				if (j == 0 || x-j+1 > a[i][0]) a[i][0] = x-j+1;
			}
		}
		sort(begin(a),end(a),[](auto a, auto b){
			return a[0] < b[0];
		});
		int start = a[0][0] , extra = a[0][1];
		for (int i=1;i<n;i++) {
			start += max(0,a[i][0]-(start+extra));
			extra += a[i][1];
		}
		cout << start << '\n';
		/*for (auto v:a) {
			for (auto V:v) cout << V << " ";
			cout << '\n';
		}*/
	}

	return 0;	
}