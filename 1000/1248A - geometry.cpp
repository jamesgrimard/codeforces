// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		long long e = 0 , o = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			(x % 2 == 0) ? e++ : o++;
		}
		int m ; cin >> m;
		long long E = 0, O = 0;
		for (int i=0;i<m;i++) {
			int x; cin >> x;
			(x % 2 == 0) ? E++ : O++;
		}
		cout << (E*e + O*o) << '\n';
	}


	return 0;
}


