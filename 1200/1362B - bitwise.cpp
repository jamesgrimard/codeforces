// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),r(2048);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			r[a[i]]++;
		}
		int ans = -1;
		for (int i=1;i<=1024;i++) {
			for (int j=0;j<n;j++) {
				if (r[a[j]^i] == 0) break;
				if (j == n-1) ans = i;
			}
			if (ans == i) break;
		}
		cout << ans << '\n';
		
	}

	return 0;
}