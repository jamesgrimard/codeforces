// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1401/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n] , b[n];
    int mn = 1e9;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      b[i] = a[i];
      mn = min(mn,a[i]);
    }

    sort(b,b+n);
    bool ans = 1;
    for (int i=0;i<n;i++) {
      if (a[i] % mn && a[i] != b[i]) {
        ans = 0;
        break;
      }
    }    

    (ans) ? cout << "YES\n" : cout << "NO\n";
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