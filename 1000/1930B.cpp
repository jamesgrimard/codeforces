//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    for (int i=0;i<n/2;i++) {
      cout << n - (2 * i + (n&1)) << " " << 2 * i + 1 << " ";
    }
    if (n&1) cout << n;
    cout << '\n';
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}
