// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1905/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string s; cin >> s;
    string st = s;
    
    char c = s[n-1];
    string S;
    S += c;
    s[n-1] = '.';

    for (int i=n-2;i>=0;i--) {
      if (s[i] >= S[0]) {
        S = s[i] + S;
        s[i] = '.';
      }
    }

    int p = S.size() - 1;
    int cnt = S.size();
    for (int i=0;i<S.size();i++) if (S[i] == S[0]) cnt--;

    for (int i=0;i<n;i++) {
      if (s[i] == '.') {
        s[i] = S[p];
        p--;
      }
    }

    bool ans = 1;

    for (int i=1;i<n;i++) if (s[i] < s[i-1]) ans = 0;


    if (!ans) {
      cout << -1 << '\n';
    } else {

      cout << cnt << '\n';

    }
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