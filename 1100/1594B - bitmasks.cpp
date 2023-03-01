// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int k,n; cin >> k >> n;

		bitset<32> m(n);

		long long total = 0;

		for (int i=0;i<32;i++) {
			if (m[i] == 1) {
				long long cnt = i , sum = 1;
				while (cnt > 0) {
					cnt--;
					sum = (sum*k)%1000000007;
				}
				total = (total+sum)%1000000007;
			}
		}

		cout << total << '\n';

	}

	return 0;
}

