// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1157/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n; cin >> n;
  string s; cin >> s;
  map<char,char> m;
  for (int i=1;i<=9;i++) {
    char x; cin >> x;
    m[char(48+i)] = x;
  }

  int I = 0;

  for (int i=0;i<n;i++) {
    if (s[i] < m[s[i]]) {
      I = i;
      break;
    }
  }

  for (int i=I;i<n;i++) {
    if (s[i] > m[s[i]]) break;
    s[i] = m[s[i]];
  }

  cout << s << '\n';
      



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