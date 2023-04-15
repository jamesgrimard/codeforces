// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int one = 0;
		vector<int> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] == 1) one++;
		}
		sort(begin(a),end(a));
		bool f = 0;
		for (int i=1;i<n;i++) {
			if (a[i]-a[i-1] == 1) f = 1;
		}
		(one > 0 && one != n && f == 1) ? cout << "NO\n" : cout << "YES\n";
	}

	return 0;
}