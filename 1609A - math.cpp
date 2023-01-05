// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n);

		int tally = 0 , sum = 0;

		for (int i=0;i<n;i++) {
			cin >> a[i];
			while (a[i] % 2 == 0) {
				a[i] /= 2;
				tally++;
			}
			sum += a[i];
		}
		
		long long mx = 0 , c = 0;

		for (int i=0;i<n;i++) {
			if (a[i] * pow(2,tally) > mx) {
				mx = a[i] * pow(2,tally); c = a[i];
			}
		}
		
		cout << (mx+sum-c) << '\n';

	}

	return 0;
}

