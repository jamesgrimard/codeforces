// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a , b , m; cin >> a >> b >> m;

	long long k = (a%m) + (b%m);
	if (k >= m) {
		cout << ((a/m) + (b/m) + 1) << " " << min(m-(a%m),m-(b%m));
	} else {
		cout << ((a/m) + (b/m)) << " " << 0;
	}
	


	return 0;
}