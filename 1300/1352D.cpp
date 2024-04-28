// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1352/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    int cur = 0, prev = 0 , L = 0 , R = n-1 , moves = 0 , tL = 0 , tR = 0;
    while (L <= R) {
      if (moves & 1) {
        cur += a[R];
        tR += a[R];
        R--;        
      } else {
        cur += a[L];
        tL += a[L];
        L++;       
      }
      if (cur > prev || L > R || R < L) {
        moves++;
        prev = cur;
        cur = 0;
      }
    }
    cout << moves << " " << tL << " " << tR << '\n';
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