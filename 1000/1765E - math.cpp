// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		long long n, a,b; cin >> n >> a >> b;
		if (a > b) {
			cout << 1;
		} else {
			long long k = n/a;
			if (n%a != 0) k++;
			cout << k;
		}
		cout << '\n';
	}

	return 0;
}

