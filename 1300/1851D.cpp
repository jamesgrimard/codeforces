// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1851/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
            
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long p = 0 , odd = 0;
    bool a[n+1] = {} , ans = 1;
    for (int i=0;i<n-1;i++) {
      long long x; cin >> x;
      if (x-p > n || a[x-p] == 1) {
        if (odd) ans = 0;
        odd = x-p;
      }
      if (x-p <= n) a[x-p] = 1;
      p = x;
    }
    for (int i=1;i<=n;i++) if (!a[i] && odd) odd -= i;
    (!odd && ans) ? cout << "YES\n" : cout << "NO\n";
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