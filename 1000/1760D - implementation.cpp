// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin>>a[i];
		bool u = 0 , ans = 1;

		for (int i=1;i<n;i++) {
			if (a[i] > a[i-1]) u = 1;
			if (a[i] < a[i-1] && u == 1) ans = 0;
		}

		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}


	


	return 0;
}

