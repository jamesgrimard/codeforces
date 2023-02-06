// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , m; cin >> n >> m;
	long long k = pow(2,n);
	cout << (m % k);

	return 0;
}

