// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1868/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n,m; cin >> n >> m;
    (m == 1) ? cout << 0 << '\n' : cout << min(m,n+1) << '\n';
    for (int i=0;i<n;i++) {
      int k = min(i,m-2);
      for (int j=0;j<m;j++) cout << (m-1-k+j) % m << " ";
      cout << '\n';
    }
  }

}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
