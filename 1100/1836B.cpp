//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		long long n , g, r; cin >> n >> g >> r;
		
		long long TOTAL = g * r;
		long long K = min(TOTAL, (n - 1) * (r / 2 + (r & 1) - 1) );

		( (TOTAL - K) % r >= (r / 2 + (r & 1)) ) ? cout << K - (r - (TOTAL - K) % r) : cout << K + (TOTAL - K) % r;

		cout << '\n';
	}

	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
