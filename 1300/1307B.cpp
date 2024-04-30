// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1307/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
 int tt; cin >> tt;
 while (tt--) {
  int n,k; cin >> n >> k;
  int a[n];
  int ans = 2,mx=1;
  for (int i=0;i<n;i++) {
    cin >> a[i];
    if (a[i] == k) ans = 1;       
    mx = max(a[i],mx);
  }
  if (ans == 1) {
    cout << ans << '\n';
    continue;
  }
  cout << max(k / mx + (bool)(k % mx) , ans) << '\n';
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