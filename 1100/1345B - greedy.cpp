// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		long long tally = 1 , cnt = 0;
		vector<long long> a;
		while ((tally * tally + tally) / 2LL * 3LL - tally <= n) {
			a.push_back((tally * tally + tally) / 2LL * 3LL - tally);
			tally++;
		}
		for (int i=size(a)-1;i>=0;i--) {
			if (n < a[i]) continue;
			while (n >= a[i]) {
				cnt++;
				n-=a[i];
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}

