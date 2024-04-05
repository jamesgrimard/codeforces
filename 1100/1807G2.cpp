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
		long long a[n] , s[n] = {}; 
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		bool ans = 1;
		s[0] = a[0];
		if (a[0] != 1) ans = 0;
		for (int i=1;i<n;i++) {
			s[i] = s[i-1] + a[i];
			if (a[i] > s[i-1]) ans = 0;
		}
		(ans) ? cout << "YES\n" : cout << "NO\n";
	}
	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
