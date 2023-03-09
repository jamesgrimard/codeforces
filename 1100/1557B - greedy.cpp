// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n,k; cin >> n >> k;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i+1;
		}	
		sort(begin(a),end(a));
		int cnt = 1;
		for (int i=1;i<n;i++) {
			if (a[i].second-a[i-1].second != 1) cnt++;
		}
		(cnt <= k) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

