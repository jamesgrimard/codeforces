// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n, k; cin >> n >> k;

		vector<int> a(n*k);

		for (int i=0;i<n*k;i++) cin >> a[i];

		int r = n / 2 + 1 , l = n - r;

		long long sum = 0;

		for (int i=1;i<=k;i++) sum += a[n*k - r*i];

		cout << sum << '\n';
	}

	

	return 0;
}

