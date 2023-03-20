// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a , b; cin >> a >> b;

	if (a == 0) a = 1;
	if (b == 0) b = 1;

	if (a == b) {
		cout << 1;
	} else {
		long long k = b % 10;
		while (b-1 > a) {
			k = (k * ((b-1) % 10)) % 10;
			b--;
			if (k == 0) break;
		}
		cout << k << '\n';
	}

	return 0;
		
}

