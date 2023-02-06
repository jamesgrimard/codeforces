// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long x , y , k ; cin >> x >> y >> k;

		long long stc = y*k;

		long long total = stc + k;

		long long sts = ceil((long double)(total-1)/(long double)(x-1));

		cout << (sts+k) << '\n';
	}

	return 0;
}
