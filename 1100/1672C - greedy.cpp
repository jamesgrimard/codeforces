// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--){
		int n; cin >> n;
		vector<int> a(n);
		int l = -1 , r = -1 , tally = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i > 0 && a[i] == a[i-1]) {
				r = i-1;
				(l == -1) ? l = i : tally++;
			}
		}
		int cnt = max(r - l,0);
		if (r == l && tally > 0) cnt++;
		
		(r != -1) ? cout << cnt << '\n' : cout << 0 << '\n';
	}

	return 0;
}

