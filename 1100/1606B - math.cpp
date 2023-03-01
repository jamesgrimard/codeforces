// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;		
		
		long long time = 0 , total = 1;

		while (total < n) {
			if (total < k) {
				total *= 2;
				time++;
				continue;
			}
			break;
		}

		if (total < n) {
			time += (n - total) / k;
			if ((n - total) % k != 0) time++;
		}

		cout << time << '\n';
	}

	return 0;
}

