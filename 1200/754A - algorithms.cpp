// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n+1),r;
	for (int i=1;i<=n;i++) cin >> a[i];
	bool f = 0 , ans = 1;
	int sum = 0;
	for (int i=1;i<=n;i++) {
		if (f == 0) {
			r.push_back(i);
			f = 1;
		}
		if (f == 1) sum += a[i];
		if (i < n && (sum == 0 || a[i+1] == 0)) continue;
		f = 0;
		if (sum == 0) ans = 0;
		sum = 0;
		r.push_back(i);
	}

	if (ans == 0) {
		cout << "NO\n";
	} else {
		cout << "YES\n" << r.size()/2 << '\n';
		for (int i=0;i<r.size();i+=2) cout << r[i] << " " << r[i+1] << '\n';
	}

	return 0;	
}

		