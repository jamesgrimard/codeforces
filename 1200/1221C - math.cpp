// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int c , m , x; cin >> c >> m >> x;
		int ans = min(min(m,c),x);
		c -= ans ; m -= ans ; x -= ans;
		if (m > 0 && c > 0) ans+=min(min(m,c),(m+c)/3);
		cout << ans << '\n';
	}	

	return 0;
}