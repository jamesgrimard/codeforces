// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int l = n , r = n , p = 1 , gap = 0;
		for (int i=0;i<k;i++) {
			int x; cin >> x;
			gap = max(x-p,gap);
			l = min(x,l);
			r = min(n-x+1,r);
			p = x;
		}
		cout << max(max(l,r),gap/2+1) << '\n';
	}

	return 0;
}



