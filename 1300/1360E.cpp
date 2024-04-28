// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1360/E
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string s[n];
    bool ans = 1;
    for (int i=0;i<n;i++) cin >> s[i];
    
    for (int i=0;i<n-1;i++) {
      for (int j=0;j<n-1;j++) { 
        if (s[i][j] == '1' && s[i][j+1] == '0' && s[i+1][j] == '0') ans = 0;
      }
    }




    (ans) ? cout << "YES\n" : cout << "NO\n";
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