// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1030/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int n; cin >> n;
  string s; cin >> s;

  bool ans = 0;
  int cnt , cur;

  for (int i=4500;i>=0;i--) {
    cnt = 0 , cur = 0;
    for (int j=0;j<n;j++) {
      cur += (s[j] - '0');
      if (cur == i) {
        cnt++;
        cur = 0;
      }
    }
    if (cur == 0 && cnt > 1) ans = 1;
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