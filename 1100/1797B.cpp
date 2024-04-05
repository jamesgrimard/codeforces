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
		int n,k; cin >> n >> k;
		int a[n][n];
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) cin >> a[i][j];
		}

		int cnt = 0;

		for (int i=0;i<n/2+(n&1);i++) {
			for (int j=0;j<n;j++) {
				if (a[i][j] != a[n-1-i][n-1-j]) {
					cnt++;
					a[i][j] = a[n-1-i][n-1-j];
				}
			}
		}

		((cnt <= k && cnt % 2 == k % 2) || (cnt <= k && n % 2)) ? cout << "YES\n" : cout << "NO\n";
	}

}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
