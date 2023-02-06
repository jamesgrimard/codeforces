// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		long long a , b , k = -1 ; cin >> a >> b;
		if (a < b) swap(a,b);

		if (a % b == 0) {
			long long c = a/b;
			while (c % 2 == 0) c /= 2;
			if (c != 1) {
				k = -1;
			} else {
				long long count = 0;
				while (b < a) {
					count++;
					b *= 8;
				}
				k = count;
			}
			
		} else if (a == b) k = 0;

		cout << k << '\n';
	}


	return 0;
}
