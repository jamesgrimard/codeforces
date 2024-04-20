// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1882/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		bool a[n][51] = {};
		vector<int> b(51,0);
		for (int i=0;i<n;i++) {
			int k; cin >> k;
			for (int j=0;j<k;j++) {
				int x; cin >> x;
				a[i][x] = 1;
				b[x]++;
			}
		}
		int mx = 0;
		for (int i=1;i<=50;i++) {
			if (!b[i]) continue;
			vector<int> B = b;
			int cnt = 0;
			for (int j=0;j<n;j++) {
				if (!a[j][i]) continue;
				for (int k=1;k<=50;k++) B[k] -= a[j][k];
			}
			for (auto &x : B) if (x) cnt++;
			mx = max(mx,cnt);
		}
		cout << mx << '\n';

	}


}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
