// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n ; cin >> n;

		vector<int> a(n);

		for (int i=0;i<n;i++) cin >> a[i];

		int tally = a[n-1];

		for (int i=n-1;i>=0;i--){
			if (a[i] > tally) tally = a[i];
			(tally > 0) ? a[i] = 1 : a[i] = 0;
			tally--;
		}

		for (int i=0;i<n;i++) cout << a[i] << " ";

		cout << '\n';
	}

	return 0;
}

