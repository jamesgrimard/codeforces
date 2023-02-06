// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n,m; cin >> n >> m;
		long long sum = 0;
		vector<int> a;
		for (int i=1;i<=n+m;i++) {
			int x; cin >> x;
			if (i != n+m) {
				a.push_back(x); continue;
			}
			sum += x;
		}
		sort(begin(a),end(a));
		for (int i=size(a)-1;i>=(n+m)-n;i--) {
			sum += a[i];
		}
		
		cout << sum << '\n';
	}

	return 0;
}

