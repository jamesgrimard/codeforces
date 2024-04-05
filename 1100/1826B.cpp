//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

int _gcd(int a, int b) {
	if (a % b == 0) return b;
	return _gcd(b,a%b);
}

              
void solve() {                 
	        
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		int x = 0;

		for (int i=0;i<n/2+(n&1);i++) {
			if (a[i] != a[n-1-i]) x = _gcd(x,abs(a[i]-a[n-1-i]));
		}	

		cout << x << '\n';
	}		
	      


}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
