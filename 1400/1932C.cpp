// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1932/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    string s; cin >> s;
    int c[n] , l = 0 , r = n-1;
    for (int i=0;i<n;i++) {
      if (s[i] == 'L') {
        c[n-1-i] = l;
        l++;
      } else {
        c[n-1-i] = r;
        r--;
      }
    }

    int ans[n] , cur = 1;
    for (int i=0;i<n;i++) {
      cur = (a[c[i]] % k * cur % k) % k ;
      ans[n-1-i] = cur;
    }

    for (auto &i : ans) cout << i << " ";
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