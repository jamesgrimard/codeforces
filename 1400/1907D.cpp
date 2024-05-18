// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1907/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int tt; cin >> tt;
  while (tt-- ){
    int n; cin >> n;

    long long l[n] , r[n];
    for (int i=0;i<n;i++) cin >> l[i] >> r[i];
     
    long long L = l[0] , R = 1e9 , M , mn , mx;

    while (L <= R) {
      M = (L + R) / 2LL;
      mn = 0, mx = 0;
      bool f = 0;
      for (int i=0;i<n;i++) {
        mn = max(mn - M , l[i]);
        mx = min(mx + M , r[i]);
        if (mn > r[i] || mx < l[i]) {
          L = M + 1LL;
          f = 1;
          break;
        }
      }
      if (f) continue;
      R = M - 1LL;
    }

    cout << L << '\n';


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