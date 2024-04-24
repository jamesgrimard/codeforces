// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1420/C1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n,q; cin >> n >> q;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    long long cnt = 0, prev = 0;
    bool f = 1;

    for (int i=0;i<n;i++) {
      if (f && (i == 0 || a[i] > a[i-1]) && (i == n-1 || a[i] > a[i+1])) {
        cnt += a[i];
        f = 0;
        continue;
      }
      if (!f && a[i] < a[i-1] && (i == n-1 || a[i] < a[i+1])) {
        cnt -= a[i];
        f = 1;
        prev = a[i];
      }
    }
    
    if (f) cnt += prev;
    cout << cnt << '\n';
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