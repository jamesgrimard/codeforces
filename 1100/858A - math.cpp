// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;

	long long b = 1;
	while (k > 0) {
		b *= 10;
		k--;
	}

	cout << lcm(n,b);

	return 0;
		
}

