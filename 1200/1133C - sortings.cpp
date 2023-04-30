// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),s(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=1;i<n;i++) s[i] = a[i] - a[i-1] + s[i-1];
	int mx = 1;
	for (int i=1;i<n;i++) {
		if (s[i] > 5) {
			int l = 0 , r = i-1 , m;
			while (l <= r) {
				m = (l + r) / 2;
				if (s[i] - s[m] <= 5) r = m - 1;
				if (s[i] - s[m] > 5) l = m + 1;
			}
			if (l > r) mx = max(mx,i-l+1);
			if (r < l) mx = max(mx,i-r);
		} else {
			mx = max(mx,i+1);
		}
	}

	cout << mx << '\n';

	return 0;
}