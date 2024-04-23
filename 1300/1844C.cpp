// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1844/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long a[n] , mx = -1e9 , cnto = 0 , cnte = 0;
    bool F = 0 , f = 0;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      mx = max(a[i],mx);
      if (i % 2 && a[i] > 0) {
        f = 1; 
        cnto += a[i];
      }
      if (i % 2 == 0 && a[i] > 0) {
        F = 1; 
        cnte += a[i];
      }
    }
    if (f) mx = max(cnto,mx);
    if (F) mx = max(cnte,mx);
    cout << mx << '\n';
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