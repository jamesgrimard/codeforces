// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		long long a,b,c,d;
		cin >> a >> b >> c >> d;

		if (a <= b) {
			cout << b << '\n';
			continue;
		}

		if (c <= d) {
			cout << -1 << '\n';
			continue;
		}

		long long k = (a - b) / (c - d);
		if ((a - b) % (c - d) != 0) k++;

		cout << (k * c + b) << '\n';
	}

	return 0;
}