// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		bool F = 1;
		int i1 = n , p = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (p == 0 && x == 1) {
				F = 1;
				i1 = i;
			}
			p = x;
		}
		if (F == 0 && p != 0) {
			cout << -1;
		} else {
			if (i1 == 0) cout << n +1 << " ";
			for (int i=1;i<=n;i++) {
				cout << i << " ";
				if (i == i1) cout << n+1 << " ";
			}
		}
		cout << '\n';
	}

	return 0;
}