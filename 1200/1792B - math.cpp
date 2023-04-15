// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		vector<long long> a(5);
		for (int i=1;i<=4;i++) cin >> a[i];
		if (a[1] == 0) {
			if (a[3] > 0 || a[2] > 0 || a[4] > 0) {
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
			continue;
		}
		if (a[2] > a[3]) swap(a[2],a[3]);		

		long long G1 = a[1] , G2 = a[1] , moves = a[1] + a[2];

		G1 += min(a[1],a[2]); G2 -= min(a[1],a[2]);

		moves += max(0LL,a[2]-a[1]);

		a[3] -= max(0LL,a[2]-a[1]);

		long long tmp = min(G1,a[3]);

		G1 -= tmp; G2 += tmp;

		moves += tmp;

		a[3] -= tmp;

		moves += min(min(G1,G2)+1LL,a[4]+a[3]);

		cout << moves << '\n';

	}
	
	return 0;
}