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
		if (n % 2 == 0) {
			for (int i=1;i<=n;i+=2) cout << i+1 << " " << i << " ";
			cout << '\n';
		} else if (n == 1) {
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
