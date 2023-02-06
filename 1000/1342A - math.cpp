// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long a , b , x, y; cin >> a >> b >> x >> y;
		cout << min(min(a,b)*y+abs(a-b)*x,(a+b)*x) << '\n';
	}


	return 0;
}
