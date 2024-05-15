// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1923/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , q; cin >> n >> q;
    int a[n + 1] , c[n+1] = {};
    
    for (int i=1;i<=n;i++) cin >> a[i];

    long long t[n+1] = {};    
    for (int i=1;i<=n;i++) {
      c[i] = c[i-1];
      t[i] = t[i-1];
      if (a[i] == 1) {
        c[i]++;
      } else {
        t[i] += (a[i] - 1);
      }
    }

    for (int i=0;i<q;i++) {
      int l , r; cin >> l >> r;
      (t[r] - t[l-1] >= (long long) (c[r] - c[l-1]) && r != l) ? cout << "YES\n" : cout << "NO\n";
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