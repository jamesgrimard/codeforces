// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1443/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int a,b; cin >> a >> b;
    string s; cin >> s;
    int mx = a / b;
    bool f = 0;
    int cost = 0 , cnt = mx , tmp = 0;
    for (int i=0;i<s.size();i++) {
      if (s[i] == '1') {
        if (f == 0) {
          cost += a;
        } else {
          if ( cnt >= 0) {
            cnt = mx;
            cost += tmp;
            tmp = 0;
          }
        }
        f = 1;
      }
      if (s[i] == '0') {
        if (f == 1) {
          tmp += b;
          cnt--;
          if (cnt < 0) {
            cnt = mx;
            tmp = 0;
            f = 0;
          }
        }
      }
    }
    cout << cost << '\n';
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