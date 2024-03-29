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
		string s; cin >> s;
		int mn = 0 , mid = n & 1;
		for (int i=0;i<n/2;i++) if (s[i] != s[n-1-i]) mn++;	
		
		for (int i=0;i<=n;i++) {
			if (i >= mn && i <= n-mn) {
				if (mid || mn % 2 == i % 2) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
			}
		}
		cout << '\n';
	}
}				
		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
