// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1265/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n+1];
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      a[x] = i;
    }
    int mx = 0 , mn = 200000;
    for (int i=1;i<=n;i++) {
      mx = max(a[i],mx);
      if (a[i] < mn) mn = a[i];
      (mx-mn+1 == i) ? cout << '1' : cout << '0';
    }
    cout << '\n';
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