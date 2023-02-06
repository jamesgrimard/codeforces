// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ; cin >> n;
		int mx = 0;
		vector<int> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			mx = max(mx,a[i]);
		}
		int tally = 0 , tmp = 0;
		for (int i=n-1;i>=0;i--){
			if (a[i] == mx) break;
			if (a[i] > tmp) {
				tally++; tmp = a[i];
			}
		}
		cout << tally << '\n';
	}

	return 0;
}

