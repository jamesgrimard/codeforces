//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;





void solve() {

	int tt; cin >> tt;
	while (tt--) {
			int xa,ya; cin >> xa >> ya;
			int xb,yb; cin >> xb >> yb;
			int xc,yc; cin >> xc >> yc;
			int sum = 1;
			if (xa-xb > 0 && xa-xc > 0) {
				sum += abs(xa - max(abs(xb),abs(xc)));
			} else if (xa-xb < 0 && xa-xc < 0) {
				sum += abs(xa - min(abs(xb),abs(xc)));
			}
			if (ya-yb > 0 && ya-yc > 0) {
				sum += abs(ya - max(abs(yb),abs(yc)));
			} else if (ya-yb < 0 && ya-yc < 0) {
				sum += abs(ya - min(abs(yb),abs(yc)));
			}
			cout << sum << '\n';
	}


}







int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
