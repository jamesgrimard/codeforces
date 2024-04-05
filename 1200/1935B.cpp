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
		int a[n] , r[n+1] = {};
		for (int i=0;i<n;i++) {
			cin >> a[i];
			r[a[i]]++;
		}
    
		bool ans = 1;
		int last = 0;

		for (int i=0;i<=n;i++) {
			if (!r[i]) break;
			if (r[i] == 1) {
				ans = 0;
				break;
			}
			if (r[i] >= 2) last = i;
		}

		if (!ans) {
			cout << -1 << '\n';
			continue;
		}

		if (!r[0]) {
			cout << n << '\n';
			for (int i=1;i<=n;i++) cout << i << " " << i << '\n';
			continue;
		}
		
		int L = 0, R = -1;

		set<int> s,s1;

		for (int i=0;i<n;i++) {
      if (R == -1) {
      	if (a[i] <= last) s.emplace(a[i]);
				if (s.size() == last+1) R = i;
			} else if (a[i] <= last) {
				s1.emplace(a[i]);
			}
		}

		if (R == -1 || s.size() != s1.size()) {
			cout << -1 << '\n';
		} else {
			cout << 2 << '\n';
			cout << L + 1 << " " << R + 1 << '\n';
			cout << R + 2 << " " << n << '\n';
		}

	}
		

}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
