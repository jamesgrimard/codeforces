// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int mx = a[0], cnt = 0 , ans = 0;
		for (int i=0;i<n;i++) {
			if (a[i] > mx) mx = a[i];
			if (mx == i + 1) ans++;
		}
		cout << ans << '\n';
	}
	
	return 0;	
}