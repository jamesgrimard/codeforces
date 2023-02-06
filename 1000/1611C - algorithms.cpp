// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		int mx= 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			mx = max(mx,a[i]);
		}
		if (a[0] == mx) {
			reverse(begin(a)+1,end(a));
			for (int i=0;i<n;i++) cout << a[i] << " ";
		} else if (a[n-1] == mx) {
			reverse(begin(a),end(a)-1);
			for (int i=0;i<n;i++) cout << a[i] << " ";
		} else {
			cout << -1;
		}
		cout << '\n';
	}

	return 0;
}
