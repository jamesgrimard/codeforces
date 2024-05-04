// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1194/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    string s , t , p; cin >> s >> t >> p;

    int I = 0;
    int a[26] = {};

    for (int i=0;i<t.size();i++) {
      if (t[i] == s[I]) {
        I++;
      } else {
        a[t[i]-97]--;
      }
    }

    bool ans = 1;

    for (int i=0;i<p.size();i++) a[p[i]-97]++;

    for (int i=0;i<26;i++) if (a[i] < 0) ans = 0;

    if (I != s.size()) ans = 0;

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