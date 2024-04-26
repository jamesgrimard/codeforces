// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1365/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    bool ans = 1;
    int a[n];
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (i && a[i] < a[i-1]) ans = 0;
    }
    bool b[n] , f = 0 , F = 0;
    for (int i=0;i<n;i++) {
      cin >> b[i];
      if (b[i]) f = 1;
      if (!b[i]) F = 1;  
    }
    ((f && F) || ans) ? cout << "Yes\n" : cout << "No\n";
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