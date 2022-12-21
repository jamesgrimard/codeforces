// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n,k;
		cin >> n >> k;

		long long sum = 0, sum2 = 0;
		for (int i=0;i<n;i++){
			int x;
			cin >> x;
			sum += x;
			sum2 += (x/k);
			if (x % k != 0) sum2++;
		}
		long long ans = sum / k;
		if (sum % k != 0) ans++;

		cout << ans << " " << sum2 << '\n';

	}

	return 0;
}