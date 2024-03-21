//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int a = 0 , b = 0;
		for (int i=0;i<n;i++) {
			int p , q; cin >> p >> q;
			if (p == k) a = 1;
			if (q == k) b = 1;
		}
		(a & b) ? cout << "YES\n" : cout << "NO\n";
	}
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	

  return 0;
}
