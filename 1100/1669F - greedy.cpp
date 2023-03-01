// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n),b(n) , c(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			(i == 0) ? b[i] = a[i] : b[i] = b[i-1] + a[i];
		}
		map<int,int> m;
		for (int i=n-1;i>=0;i--) {
			(i == n-1) ? c[i] = a[i] : c[i] = c[i+1] + a[i];
			m[c[i]] = n-i;
		}
		int mx = 0;
		for (int i=0;i<n-1;i++) {
			if (m[b[i]] != 0 && m[b[i]] + i+1 <= n) mx = m[b[i]] + i + 1;
		}
		cout << mx << '\n';
		/*for (auto v : a) cout << v << " ";
		cout << '\n';
		for (auto v : b) cout << v << " ";
		cout << '\n';
		for (auto v : c) cout << v << " ";
		cout << '\n';*/
	}

	return 0;
}

