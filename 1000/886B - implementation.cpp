// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,bool>m;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int ans = 0;
	for (int i=n-1;i>=0;i--) {
		if (m[a[i]] != 1) {
			ans = a[i];
			m[a[i]] = 1;
		}
	}
	cout << ans;


	return 0;
}



