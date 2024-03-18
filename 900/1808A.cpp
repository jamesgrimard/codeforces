//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
			int a , b; cin >> a >> b;
			int ans = a , MX , MN;
			for (int i=0;i<=b-a;i++) {
				int p = a + i;
				int mn = 9 , mx = 0;
				while (p != 0) {
					int q = p % 10;
					mx = max(q,mx);
					mn = min(q,mn);
					p /= 10;
				}
				if (i == 0 || mx - mn > MX - MN) {
					ans = a + i;
					MX = mx , MN = mn;
				}
				if (MX - MN == 9) break;
			}
			cout << ans << '\n';
	}
	
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	

  return 0;
}
