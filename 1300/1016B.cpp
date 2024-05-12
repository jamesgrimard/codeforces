// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1016/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
  
void solve() {
  
  int n , m , q; cin >> n >> m >> q;
  string s; cin >> s;
  string t; cin >> t;

  int a[n] = {};

  for (int i=0;i<n-m+1;i++) {
    if (s[i] == t[0]) {
      int p = 0;
      for (int j=0;j<m;j++) {
        if (s[i+j] == t[j]) {
          p++;
        } else {
          break;
        }
      }
      if (p == m) a[i] = 1;
    }
  }

  for (int i=1;i<n;i++) a[i] += a[i-1];

  for (int i=0;i<q;i++) {
    int l , r; cin >> l >> r;
    if (r-l+1 < m) {
      cout << 0 << '\n';
      continue;
    }
    l--,r--;
    if (l == 0) {
      cout << a[r-m+1] << '\n';
    } else {
      cout << a[r-m+1] - a[l-1] << '\n';
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