// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<int> a(n);
		vector<bool> b(101);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			b[a[i]] = 1;
		}
		int mn = n/k+1;
		for (int i=1;i<=100;i++) {
			if (b[i] == 0) continue;
			int tally = 0 , cnt = 0;
			for (int j=0;j<n;j++) {
				if (a[j] == i && tally == 0) continue;
				tally++;
				if (tally == k || j == n-1) {
					cnt++;
					tally = 0;
				}
			}
			mn = min(cnt,mn);
		}
		cout << mn << '\n';
	}
	
	return 0;
}

