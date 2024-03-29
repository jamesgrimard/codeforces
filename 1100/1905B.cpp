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
		int a[n+1] = {};
		for (int i=0;i<n-1;i++) {
			int x,y; cin >> x >> y;
			a[x]++ , a[y]++;
		}
		int cnt = 0;
		for (int i=1;i<=n;i++) if (a[i] == 1) cnt++;
		cout << cnt / 2 + (cnt&1) << '\n';
	}
				
  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
