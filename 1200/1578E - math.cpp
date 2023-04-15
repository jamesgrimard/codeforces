// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		long long N = n;
		long long sum = 0 , r = 0;
		while (n--) {
			long long mx = 1;
			for (int i=1;i<N-n;i++) mx *= 2LL;
			sum += max(mx/k,1LL);
			if (mx > k ) r += (mx % k);
			if (n == 0) {
				sum += r / k;
				if (r % k != 0) sum++;
			}
		}
		cout << sum << '\n';

	}

	return 0;
}