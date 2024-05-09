// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1063/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int n; cin >> n;
  string s; cin >> s;
  int a[26] = {};
  for (int i=0;i<n;i++) a[s[i]-97]++;
  for (int i=0;i<26;i++) {
    for (int j=0;j<a[i];j++) cout << char(i+97);
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