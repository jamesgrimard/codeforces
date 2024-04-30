// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1285/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long a[n] , cnt = 0;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      cnt += a[i];
    }
    long long mx = -1 * 1e9;
    for (int j=0;j<=1;j++) {
      long long cur = 0 , start = j;
      for (int i=j;i<n;i++) {
        if (i-start == n-1) break;
        cur += a[i];
        mx = max(cur,mx);
        if (cur < 0) {
          cur = 0;
          start = i + 1;
        }
      }
    }   

    (mx >= cnt) ? cout << "NO\n" : cout << "YES\n";
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