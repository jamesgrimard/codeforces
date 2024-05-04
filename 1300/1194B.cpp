// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1194/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int tt; cin >> tt;
  while (tt--) {
  int n , m; cin >> n >> m;
  string a[n];
  for (int i=0;i<n;i++) cin >> a[i];

  int C[m] = {} , R[n] = {};
  int mnc = n, mnci = 0, mnr = m , total = 0;

  for (int i=0;i<m;i++) {
    int cnt = 0;
    for (int j=0;j<n;j++) {
      if (a[j][i] == '.') cnt++;
    }
    mnc = min(mnc,cnt);
    C[i] = cnt;
  }
 
  for (int i=0;i<n;i++) {
    int cnt = 0;
    for (int j=0;j<m;j++) {
      if (a[i][j] == '.') cnt++;
    }
    mnr = min(mnr,cnt);
    R[i] = cnt;
  }

  int ans = n + m - 1;

  for (int i=0;i<n;i++) {
    if (R[i] == mnr) {
      for (int j=0;j<m;j++) {
        if (a[i][j] == '.') {
          ans = min(mnr + (C[j] - 1), ans);
        } else {
          ans = min(mnr + C[j] , ans);
        }
      }
    }
  }

  cout << ans << '\n';

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