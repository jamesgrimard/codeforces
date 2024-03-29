//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		long long a[n+1]= {} , s[n+1] = {};
		for (int i=1;i<=n;i++) cin >> a[i];
		
		for (int i=1;i<=n;i++) s[i] = a[i] + s[i-1];
		
		long long ans = 0;

		for (int i=1;i<=n/2;i++) {
			if (n % i != 0) continue;
			long long mx = s[i], mn = s[i];
			for (int j=i;j<=n;j+=i) {
				mx = max(s[j]-s[j-i],mx);
				mn = min(s[j]-s[j-i],mn);
			}
			ans = max(mx-mn,ans);
		}
		cout << ans << '\n';
		//for (auto x : s) cout << x << " ";
		//cout << '\n';
	}

	
  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
