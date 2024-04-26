// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1366/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n , x, m; cin >> n >> x >> m;
    int mn = x, mx = x;

    for (int i=0;i<m;i++) {
      int l , r; cin >> l >> r;
      if ((mn >= l && mn <= r) || (mx >= l && mx <= r)) {
        mx = max(r,mx);
        mn = min(l,mn);
      }
    }

    cout << mx - mn + 1 << '\n';
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