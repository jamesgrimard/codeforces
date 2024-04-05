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
		string s; cin >> s;
		long long N = s.size();
		s += s;
		long long n = s.size();
		long long mx = 0 , cnt = 0;
		bool f = 0 , F = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == '0') f = 1;
			if (s[i] == '1') {
				F = 1;
				cnt++;
			} else {
				mx = max(cnt,mx);
				cnt = 0;
			}
		}
		mx = max(cnt,mx);

		(!f) ? cout << N * N << '\n' : cout << max((mx/2LL+(mx&1LL)) * (mx/2LL+1LL) , (long long)F) << '\n';
		
	}



}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
