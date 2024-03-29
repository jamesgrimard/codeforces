//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

	
	int tt; cin >> tt;
	while (tt--)  {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		long long cnt = 0;
		for (int i=0;i<n;i++) {
			if (i == 0) {
				cnt+=(a[i]-1);
			} else {
				cnt += max(a[i]-a[i-1],0);
			}
		}
		cout << cnt << '\n';
	}

  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
