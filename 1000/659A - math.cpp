// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a , b; cin >> n >> a >> b;
	if (b < 0) {
		int q = floor((float)b/(float)n);
		int ans = b - q*n;
		ans += a;
		ans %= n;
		if (ans == 0) ans = n;
		cout << ans;
	} else {
		int ans = b % n;
		ans += a;
		ans %= n;
		if (ans == 0) ans = n;
		cout << ans;
	}


	return 0;
}



