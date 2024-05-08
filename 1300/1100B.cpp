// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1100/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int k,n; cin >> k >> n;

  int c[k+1] = {};
  int r[n] = {};

  for (int i=0;i<n;i++) {
    int x; cin >> x;
    c[x]++;
    r[i] = c[x];
  }
                  
  int mn = n;

  for (int i=k;i>=1;i--) mn = min(mn,c[i]);

  bool ans[n] = {};

  for (int i=n-1;i>=0;i--) {
    if (mn != 0 && r[i] == mn) {
      ans[i] = 1;
      mn--;
    } 
  }

  for (auto &i : ans) cout << i;



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