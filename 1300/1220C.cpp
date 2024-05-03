// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1220/B2
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

void solve() {    

  string s; cin >> s;
  int n = s.size();
  char c[n];
  for (int i=0;i<n;i++) {
    c[i] = s[i];
    if (!i) continue;
    c[i] = min(c[i],c[i-1]);
  }                      
               
  for (int i=0;i<n;i++) (c[i] == s[i]) ? cout << "Mike\n" : cout << "Ann\n";
                                           
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