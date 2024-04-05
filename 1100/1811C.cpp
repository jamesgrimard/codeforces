//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

              
void solve() {                 
	        
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		n--;
		int a[n] , b[n+1] = {}, shift = 0;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			b[i+shift] = a[i];
			if (i < n - 1) {
				(a[i] < a[i+1]) ? shift = 1 : shift = 0;
			}
		}
		for (auto x : b) cout << x << " ";
		cout << '\n';
	}					



}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
