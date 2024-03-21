//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;





void solve() {

	int tt; cin >> tt;
	while (tt--) {
			int n,m,k; cin >> n >> m >> k;
			int X,Y; cin >> X >> Y;
			bool ans = 0;
			for (int i=0;i<k;i++) {
				int x,y; cin >> x >> y;
				if ((abs(x-X)+abs(y-Y)) % 2 == 0) ans = 1;
			}
			(ans) ? cout << "NO\n" : cout << "YES\n";
	}


}







int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
