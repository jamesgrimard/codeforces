// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n,m; cin >> n >> m;
		vector<int> a(n+1),R(n+1),b(n+1,10000);
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=0;i<m;i++) {
			int l,r; cin >> l >> r;
			if (a[r] < b[l]) b[l] = a[r];
			if (a[l] < b[r]) b[r] = a[l];
			R[l]++;
			R[r]++;
		}
		int mn = 20000;
		if (m%2) {
			for (int i=1;i<=n;i++) {
				if (R[i] > 0) {
					int lcmn = a[i];
					if (R[i]%2 == 0) lcmn += b[i];
					if (lcmn < mn) mn = lcmn;					
				}
			}
		} else {
			mn = 0;
		}
		cout << mn << '\n';
	}

	return 0;	
}