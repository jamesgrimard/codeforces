// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , t , k , d; cin >> n >> t >> k >> d;

	int mx = n / k;
	if (n % k != 0) mx++;
	mx *= t;

	(d+t < mx) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}

