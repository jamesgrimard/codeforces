// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n-1;i++) {
			if (a[i] < 0) continue;
			a[i+1] += a[i]; a[i] = 0;
		}
		cout << a[n-1] << '\n';
	}

	return 0;
}
