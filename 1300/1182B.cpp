// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1182/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int h,w; cin >> h >> w;
  string a[h];
  bool f= 0;
  for (int i=0;i<h;i++) cin >> a[i];
  for (int i=1;i<h-1;i++) {
    for (int j=1;j<w-1;j++) {
      if (a[i][j] == '*' && a[i-1][j] == '*' && a[i+1][j] == '*' && a[i][j-1] == '*' && a[i][j+1] == '*') {
        a[i][j] = '1';
        for (int k=i+1;k<h;k++) {
          if (a[k][j] == '*') {
            a[k][j] = '1';
          } else {
            break;
          }
        }
        for (int k=i-1;k>=0;k--) {
          if (a[k][j] == '*') {
            a[k][j] = '1';
          } else {
            break;
          }
        }
        for (int k=j+1;k<w;k++) {
          if (a[i][k] == '*') {
            a[i][k] = '1';
          } else {
            break;
          }
        }
        for (int k=j-1;k>=0;k--) {
          if (a[i][k] == '*') {
            a[i][k] = '1';
          } else {
            break;
          }
        }
        f = 1;
        break;
      }
    }
    if (f) break;
  }

  bool ans = f;
  for (int i=0;i<h;i++) {
    for (int j=0;j<w;j++) if (a[i][j] =='*') ans = 0;
  }

  (ans) ? cout << "YES\n" : cout << "NO\n";

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