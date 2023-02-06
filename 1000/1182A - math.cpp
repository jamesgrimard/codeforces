// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	long long k = pow(2,n/2);
	(n % 2 == 0) ? cout << k : cout << 0;


	return 0;
}