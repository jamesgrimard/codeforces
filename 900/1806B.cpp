//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int z = 0 , o = 0;
		bool f = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 1) o++;
			if (x == 0) z++;
			if (x != 0 && x != 1) f = 1;
		}
		if (z > n/2+(n&1)) {
			if (f || o == 0) {
				cout << 1 << '\n';
			} else {
				cout << 2 << '\n';
			}
		} else {
			cout << 0 << '\n';
		}
	}
	
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	

  return 0;
}
