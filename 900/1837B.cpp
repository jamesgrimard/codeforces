//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;





void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int cnt = 1 , mx = 1;
		for (int i=1;i<n;i++) {
			if (s[i] == s[i-1]) {
				cnt++;
			} else {
				mx = max(cnt,mx);
				cnt = 1;
			}
		} 
		cout << max(cnt,mx) + 1 << '\n';
	}


}







int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
