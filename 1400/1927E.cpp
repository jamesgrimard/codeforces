// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1927/E
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int k; cin >> k;

    int pn = n , p1 = 1 , r[n+1] = {};
    for (int i=1;i<=k;i++) {
      for (int j=i;j<=n;j+=k) {
        if (i % 2) {
          r[j] = pn;
          pn--;
        } else {
          r[j] = p1;
          p1++;
        }
      }
    }

    for (auto &i : r) if (i) cout << i << " ";
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