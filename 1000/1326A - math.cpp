// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;cin >> tt;

	while (tt--) {
		long long n ; cin >> n;
		if (n == 1) {
			cout << -1 << '\n'; continue;
		}
		cout << 2;
		for (int i=0;i<n-1;i++) cout << 3;
		cout << '\n';
	}

	return 0;
}
