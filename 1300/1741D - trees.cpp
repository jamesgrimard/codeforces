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
		bool ans = 1;
		int cnt = 0;
		for (int i=2;i<=n;i*=2) {
			for (int j=0;j<n;j+=i) {
				
				if (a[j] > a[j+i-1]) {
					for (int k=0;k<i/2;k++) {
						if (a[j+k] > a[j+i/2+k]) swap(a[j+k],a[j+i/2+k]);
					}
					cnt++;
				}
				
				if (a[j+i-1]-a[j] != i-1) ans = 0;
			} 
		}
		ans == 1 ? cout << cnt << '\n' : cout << -1 << '\n';
	}


	return 0;	
}