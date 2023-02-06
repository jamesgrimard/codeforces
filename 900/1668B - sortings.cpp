// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , m; cin >> n >> m;

		long long tally = 0;

		vector<int> a(n);

		for (int i=0;i<n;i++) cin >> a[i];
		
		sort(a.begin(),a.end());

		for (int i=0;i<n;i++) {
			tally += (2*a[i]+1);
			if (i != 0) tally -= a[i-1];
			if (i == n-1) tally -= a[0];
		}

		(tally <= m) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}


	return 0;
}

