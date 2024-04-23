// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1850/F
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;
            
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n ; cin >> n;
    int a[n+1]= {}, cnt[n+1] = {};
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (x <= n) a[x]++;
    }
    for (int i=1;i<=n;i++) {
      if (a[i]) {
        int k = i;
        while (k <= n) {
          cnt[k] += a[i];
          k += i;
        }
      }
    }
    int mx = 0;
    for (int i=1;i<=n;i++) mx = max(mx,cnt[i]);
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