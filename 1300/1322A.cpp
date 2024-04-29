// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1322/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  
  int n; cin >> n;
  string s; cin >> s;

  int a[n] = {} , cnt = 0 , total = 0;
  for (int i=0;i<n;i++) {
    if (i) a[i] = a[i-1];
    (s[i] == ')') ? a[i]-- : a[i]++;
    if (a[i] < 0) cnt++;
    if (a[i] == 0 && a[i-1] == -1) {
      total += (cnt + 1);
      cnt = 0;
    }

  }
    
  if (a[n-1] != 0) {
    cout << -1 << '\n';
    return;
  }

  cout << total << '\n';




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