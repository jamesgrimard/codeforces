//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--){ 
		int n,q; cin >> n >> q;
		int a[n+1] = {}; 
		for (int i=1;i<=n;i++) {
			int x; cin >> x; 
			a[i] = a[i-1] + (x&1);
		}
		for (int i=0;i<q;i++) {
			int l , r , k; cin >> l >> r >> k;
			int odds_left = a[n] - (a[r] - a[l-1]);
			if (k & 1) odds_left += (r - l + 1);
			(odds_left & 1) ? cout << "YES\n" : cout << "NO\n";			
		}
	}
	
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	

  return 0;
}
