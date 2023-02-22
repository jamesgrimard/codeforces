// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt ;cin >> tt;
	while (tt--) {
		int n , c; cin >> n >> c;
		vector<int>a(n+1);
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			a[i] += i;
		}
		sort(begin(a),end(a));
		int cnt = 0;
		for (int i=1;i<size(a);i++) {
			if (c - a[i] >= 0) {
				cnt++;
				c -= a[i];
			}
		}
		cout << cnt << '\n';
		
	}

	return 0;
}

