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
		int n , k; cin >> n >> k;
		int cnt = 0; 
		for (int i=1;i<=n;i++) {
			int x; cin >> x;
			int p = abs(x - i);
			if (hcf(p,k) != k) cnt++;
		}
		if (cnt == 0) {
			cout << 0 << '\n';
		} else if (cnt == 2) {
			cout << 1 << '\n';
		} else {
			cout << -1 << '\n';
		}
	}



}



int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
