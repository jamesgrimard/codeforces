// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n,k;
	cin >> n >> k;

	cout << n/2/(k+1) << ' ' << n/2/(k+1)*k << ' ' << (n - (n/2/(k+1) + n/2/(k+1)*k)) << '\n';

	return 0;
}