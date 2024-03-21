//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;



void solve() {
  
 int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int mx = 1 , cnt = 1;
		for (int i=1;i<n;i++) {
			if (a[i] - a[i-1] > k) {
				mx = max(mx,cnt);
				cnt = 1;
		 	} else {
				cnt++;
			}
		}
		cout << n - max(cnt,mx) << '\n';
	}						
  
}




int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
