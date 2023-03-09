// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long a , b , x , y , n; cin >> a >> b >> x >> y >> n;
		if (max(a-n,x) < max(b-n,y) || (a == b && x <= y)) {
			long long k = min(n,a-x);
			a -= min(n,a-x);
			n -= k;
			b -= min(n,b-y);
		} else {
			long long k = min(n,b-y);
			b -= min(n,b-y);
			n -= k;
			a -= min(n,a-x);
		}
		//cout << a << " " << b << " " << n << '\n';
		cout << a * b << '\n';
	}


	
	return 0;
}

