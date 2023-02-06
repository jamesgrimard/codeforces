// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		vector<int> a(n);

		int s1 = 0 , s2 = 0;

		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] <= 0) s2 += a[i];
			if (a[i] > 0) s1 += a[i];
		}

		if (s1 == s2*-1) {
			cout << "NO" << '\n';
			continue;
		}

		if (s1 > s2*-1) {
			sort(a.rbegin(),a.rend());
		} else {
			sort(a.begin(),a.end());
		}
		
		cout << "YES" << '\n';

		for (int i=0;i<n;i++) cout << a[i] << " ";

		cout << '\n';

	}

	return 0;
}

