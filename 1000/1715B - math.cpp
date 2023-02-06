// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k , b, s; cin >> n >> k >> b >> s;
		if (k*b > s || k*b + n*(k-1) < s) {
			cout << -1 << '\n'; continue;
		}
		vector<long long> a(n);
		a[0] = k*b;
		s -= k*b;
		for (int i=0;i<n;i++) {
			a[i] += min(s,k-1);
			s -= min(s,k-1);
			cout << a[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}

