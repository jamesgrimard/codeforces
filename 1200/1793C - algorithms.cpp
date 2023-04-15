// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int mn = 1 , mx = n;
		int l = 0 , r = n-1;
		bool ans = 0;
		while (r > 2 && l < n-3) {
			bool f1 = 0 , f2 = 0;
			if (a[l] == mn) {
				mn++;
				l++;
			} else if (a[l] == mx) {
				mx--;
				l++;
			} else {
				f1 = 1;
			}

			if (a[r] == mn) {
				mn++;
				r--;
			} else if (a[r] == mx) {
				mx--;
				r--;
			} else {
				f2 = 1;
			}

			if (f1 == 1 && f2 == 1) {
				ans = 1;
				break;
			}

		}
		ans == 1 ? cout << l+1 << " " << r + 1 << '\n' : cout << -1 << '\n';
	}
	
	return 0;
}