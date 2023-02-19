// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long s , n; cin >> s >> n;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
	sort(begin(a),end(a));
	bool ans = 1;
	for (int i=0;i<n;i++) {
		if (a[i].first >= s) {
			ans = 0;
			break;
		}
		s += a[i].second;
	}
	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



