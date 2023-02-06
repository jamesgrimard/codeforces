// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		long long sum = 0;
		while (n > 0) {
			sum += ((n/2)*(n/2)*8);
			n-=2;
		}
		cout << sum << '\n';
	}

	return 0;
}
