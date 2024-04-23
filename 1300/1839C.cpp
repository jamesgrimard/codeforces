// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1839/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    
    if (a[n-1] == 1) {
      cout << "NO\n";
      continue;
    }
    bool b[n]= {};

    int cnt[n] = {};
    for (int i=n-2;i>=0;i--) {
      cnt[i] = cnt[i+1];
      (a[i]) ? cnt[i]++ : cnt[i] = 0;
      if (a[i] && (i == 0 || a[i-1] == 0)) b[i] = 1;
    }

    cout << "YES\n";                         
    for (int i=n-1;i>=0;i--) {
      (b[i]) ? cout << cnt[i] << " " : cout << 0 << " ";
    }
    cout << '\n';
                                 
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