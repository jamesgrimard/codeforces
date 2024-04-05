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
		int a[n] , b[n]; 
		for (int i=0;i<n;i++) cin >> a[i]; for (int i=0;i<n;i++) cin >> b[i];
		sort(a,a+n); sort(b,b+n);

		long long sum = 1;
		for (int i=0;i<n;i++) {
			int L = 0 , R = n-1 , m;
			while (L <= R) {
				m = (L + R) / 2;
				if (b[m] >= a[i]) R = m - 1;
				if (b[m] < a[i]) L = m + 1;
			}
			if (R+1 - i <= 0) {
				sum = 0;
				break;
			}
			sum = sum * (R+1-i) % MOD;
		}
		cout << sum << '\n';
	}



	
	


}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
