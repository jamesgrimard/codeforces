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
		string s; cin >> s;
		int s0[n+1] = {} , s1[n+1] = {};
		int mn = -1 , I = n;
		for (int i=0;i<n;i++) {
			s0[i+1] = s0[i];
			s1[i+1] = s1[i];
			if (s[i] == '1') {
				s1[i+1]++;
			} else {	 
				s0[i+1]++;
			}
		}

		for (int i=0;i<=n;i++) {
		
			if ((s1[i] <= s0[i]) && (s0[n]-s0[i] <= s1[n]-s1[i])) {
				if (mn == -1 || abs(n/2+(n&1)-i) < mn) {
					mn = abs(n/2+(n&1)-i);
					I = i;
					if (i == n/2) break;
				}
			}
		}
		cout << I << '\n';
	}




}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
