// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1059/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int h,w; cin >> h >> w;

  string s[h];
  for (int i=0;i<h;i++) cin >> s[i];

  char c[h][w];
  for (int i=0;i<h;i++) for (int j=0;j<w;j++) c[i][j] = '.';

  for (int i=1;i<h-1;i++) {
    for (int j=1;j<w-1;j++) {
      if (s[i+1][j] == '.' || s[i-1][j] == '.' || s[i][j+1] == '.' || s[i][j-1] == '.' || s[i-1][j-1] == '.' || s[i-1][j+1] == '.' || s[i+1][j-1] == '.' || s[i+1][j+1] == '.'){
        continue;
      }

      c[i+1][j] = '#';
      c[i-1][j] = '#';
      c[i][j+1] = '#';
      c[i][j-1] = '#';
      c[i-1][j-1] = '#';
      c[i+1][j+1] = '#';
      c[i-1][j+1] = '#';
      c[i+1][j-1] = '#';
    }
  }

  bool ans = 1;
  for (int i=0;i<h;i++) for (int j=0;j<w;j++) if (c[i][j] != s[i][j]) ans = 0;

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