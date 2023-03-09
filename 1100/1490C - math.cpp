// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	vector<long long> a;
	long long p = 1;
	while (p*p*p < 1000000000001) {
		a.push_back(p);
		p++;
	}
	while (tt--) {
		long long n; cin >> n;
		bool ans = 0;
		for (int i=size(a)-1;i>=0;i--) {
			if (a[i]*a[i]*a[i] > n) continue;
			int l = 0 , r = size(a)-1 , m = (l + r) / 2;
			while (l <= r) {
				if (a[i]*a[i]*a[i] + a[m]*a[m]*a[m] < n) l = m+1;
				if (a[i]*a[i]*a[i] + a[m]*a[m]*a[m] > n) r = m-1;
				if (a[i]*a[i]*a[i] + a[m]*a[m]*a[m] == n) {
					ans = 1;
					goto out;
				}
				m = (l + r) / 2;
			}
		}
		out: (ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

