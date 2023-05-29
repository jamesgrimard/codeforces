// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),r(n+2);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] <= n+1) r[a[i]]++;
		}
		int mex = n + 1;
		for (int i=0;i<=n;i++) {
			if (r[i] == 0) {
				mex = i + 1;
				break;
			}
		} 
		int L = -1 , R = -1;
		for (int i=0;i<n;i++) {
			if (a[i] == mex) {
				if (L == -1) L = i; 
				R = i;
			}
		} 
		bool ans = 1;
		if (L == -1) {
			for (int i=0;i<n;i++) {
				if (a[i] > mex || r[a[i]] > 1) break;
				if (i == n-1) ans = 0;
			}
		} else {
			for (int i=L;i<=R;i++) {
				if (a[i] <= n+1) r[a[i]]--;
				if (a[i] < mex-1 && r[a[i]] == 0) ans = 0;
			}
		}
		ans == 1 ? cout << "Yes\n" : cout << "No\n";
	}
	
	return 0;	
}

		