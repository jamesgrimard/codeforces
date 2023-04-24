// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , u , v; cin >> n >> u >> v;
		int mx = 0 , p = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (i > 0) mx = max(abs(x-p),mx);
			p = x;
		}
		if (mx > 1) {
			cout << 0;
		} else if (mx == 1) {
			(u > v) ? cout << v : cout << u;
		} else {
			(2*v < u+v) ? cout << 2 * v : cout << u + v;
		}
		cout << '\n';
	} 


	return 0;
}