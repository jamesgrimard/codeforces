// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1101/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  string s; cin >> s;
  int p = 0 , n = s.size() , cnt = 0;
  string r = "[::]";
  bool a[n] = {} , ans = 0 , f = 0;

  for (int i=0;i<n;i++) {
    if (s[i] == r[p]) {
      p++;
    } else {
      cnt++;
    }
    if (p == 2) {
      a[i] = 1;
      ans = 1;
      break;
    }
  }

  p = 3;
  for (int i=n-1;i>=0;i--) {
    if (a[i]) {
      ans = 0;
      break;
    }
    if (s[i] == r[p]) {
      p--;
    } else {
      cnt++;
    }
    if (p == 1) {
      a[i] = 1;
      break;
    }
  }

  if (!ans) {
    cout << -1 << '\n';
    return;
  }

  for (int i=0;i<n;i++) {
    if (!f && a[i]) {
      f = 1;
      continue;
    }
    if (f && a[i]) break;
    if (f && s[i] != '|') cnt++;
  }

  cout << n - cnt << '\n';  



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