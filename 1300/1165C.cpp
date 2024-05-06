// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1165/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n; cin >> n;
  string s; cin >> s;

  int o = 0 , r[n] = {};
  for (int i=0;i<n-1;i++) {
    if ((i - o) % 2 || ((i-o) % 2 == 0 && s[i] != s[i+1])) continue;
    r[i] = 1;
    o++;
  }

  if ((n - o) % 2) {
    for (int i=n-1;i>=0;i--) {
      if (r[i] == 0) {
        r[i] = 1;
        o++;
        break;
      }
    }
  }

  cout << o << '\n';
  for (int i=0;i<n;i++) if (r[i] == 0) cout << s[i];
  cout << '\n';


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