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
		int a[n] , r[n+1] = {};
		bool ans = 1;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] > n) ans = 0;
			if (i > 0 && a[i] > a[i-1]) ans = 0;
			if (ans) r[a[i]]++;
		}
                                        
		for (int i=n-1;i>=1;i--) r[i] += r[i+1];

		for (int i=0;i<n;i++) {
			if (r[i+1] < a[i]) ans = 0;
		}
                 

		(ans) ? cout << "YES\n" : cout << "NO\n";
	}

	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
