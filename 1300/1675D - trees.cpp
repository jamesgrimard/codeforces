// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),b(n+1),c(n+1);
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			c[a[i]]++;
		}
		if (n == 1) {
			cout << 1 << '\n' << 1 << '\n' << 1 << '\n' << '\n';
			continue;
		}
		vector<vector<int>> o;
		for (int i=1;i<=n;i++) {
			if (c[i] == 0) { // leaf
				vector<int> r;
				int m = i;
				while (b[m] == 0) {
					r.push_back(m);
					b[m] = 1;
					m = a[m];
				}
				if (r.size() > 0) o.push_back(r);
			}
		}
		cout << o.size() << '\n';
		for (int i=0;i<o.size();i++) {
			cout << o[i].size() << '\n';
			for (int j=o[i].size()-1;j>=0;j--) cout << o[i][j] << " ";
			cout << '\n';
		}
		cout << '\n';
	}


	return 0;	
}