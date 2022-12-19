// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<int> a(n);
		int sum = 0;

		for (int i=0;i<n;i++) {
			cin >> a[i];
			sum += a[i];
		}

		int count = 0;

		if (sum % 2 == 1) {
			for (int i=0;i<n;i++) {
				int tally = 0, k = a[i];
				while ((sum - a[i] + k) % 2 != 0 && k != 0) {
					k /= 2;
					tally++;
				}
				if (tally < count || i == 0) count = tally;
			}
		}
		cout << count << '\n';
	}

	return 0;
}