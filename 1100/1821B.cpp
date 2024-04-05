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
	int n ; cin >> n;
	int a[n] , b[n+1] = {};
	for (int i=0;i<n;i++) cin >> a[i];

	int L = 1 , R = 1 , l = 1;
	for (int i=0;i<=n;i++) {
		if (i < n) cin >> b[i];
		if (i > 0 && b[i] < b[i-1]) {
			if (i-l > R - L) {
			 L = l;
			 R = i;
			}
			l = i + 1;
		}
	}

	for (int i=0;i<n;i++) {
		if (a[i] != b[i]) {
			for (int j=i;j>=0;j--) {
				L = j + 1;
				if (j > 0 && b[j-1] > b[j]) break;
			}
			for (int j=i;j<n;j++) {
				R = j + 1;
				if (b[j] > b[j+1]) break;
			}
			break;
		}
	}
	cout << L << " " << R << '\n';				
	}	
		
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
