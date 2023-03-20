// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k ; cin >> n >> k;
		long long mx = n - k*k;
		(mx >= 0 && mx % 2 == 0) ? cout << "YES\n" : cout << "NO\n";

	}

	return 0;
}

