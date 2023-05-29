// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long al,ar,bl,br,x; cin >> al >> ar >> bl >> br >> x;

	long long l = bl , r = br;
	bool ans = 0;
	while (l <= r && ans == 0) {
		long long m = (l + r) / 2LL;
		if (m*x >= al && m*x <= ar) ans = 1;
		if (m*x < al) l = m + 1LL;
		if (m*x > ar) r = m - 1LL;
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		