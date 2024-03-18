//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int hcf(int a, int b) {
	if (a % b == 0) return b;
	return hcf(b,a%b);
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
			int n; cin >> n;
			int mn = 0; for (int i=0;i<n;i++) {
				int x; cin >> x;
				x = abs(x - (i+1));
				if (x > 0) {
					if (mn == 0) {
						mn = x;
					} else {
					 	mn = hcf(mn,x);
					}
				} 
			}
			cout << mn << '\n';
	}



}



int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
