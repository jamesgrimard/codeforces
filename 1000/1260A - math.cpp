// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		long long a,b; cin >> a >> b;

		long long k = b % a;
		long long ans = (b/a) * (b/a) * (a - k) + (b/a+1)*(b/a+1) * k;
		cout << ans << '\n';
	}

	return 0;
}
