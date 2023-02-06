// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;
	for (long long i=0;i<n;i++) {
		long long x; cin >> x;
		(x % 14 <= 6 && x % 14 >= 1 && x >= 15) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
