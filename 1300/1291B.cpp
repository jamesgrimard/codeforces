// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1291/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n] , mx = 0;
    for (int i=0;i<n;i++) {
      cin >> a[i];
    }

    bool f= 0, ans=1;
    for (int i=0;i<n;i++) {
      if (a[i] - i < 0) f = 1;
      if (f) {
        a[i] = min(a[i],a[i-1]-1);
        if (a[i] < 0) {
          ans = 0;
          break;
        }
      }
    }

    (ans) ? cout << "Yes\n" : cout << "No\n";
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