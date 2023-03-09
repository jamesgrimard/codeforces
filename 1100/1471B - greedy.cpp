// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n , k; cin >> n>> k;
		vector<int> a(n);
		int mn = 100,index =0;
		long long sum = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			sum += a[i];
			int p = a[i];
			int tally = 0;
			while (p % k == 0) {
				p /= k;
				tally++;
			}
			if (tally < mn) {
				mn = tally;
				index = i;
			}
		}
		sum += mn * sum;
		for (int i=0;i<index;i++) sum += a[i];
		cout << sum << '\n';
	}

	return 0;
}

