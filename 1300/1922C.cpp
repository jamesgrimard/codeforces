// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1922/C
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

    long long l[n] = {} , r[n] = {}; 

    l[1] = 1 , r[n-2] = 1;
    for (int i=1;i<n-1;i++) {
      (abs(a[i-1]-a[i]) > abs(a[i]-a[i+1])) ? l[i+1] = 1 : l[i+1] = abs(a[i]-a[i+1]);
      l[i+1] += l[i];
    }
    for (int i=n-2;i>=1;i--) {
      (abs(a[i-1]-a[i]) < abs(a[i]-a[i+1])) ? r[i-1] = 1 : r[i-1] = abs(a[i]-a[i-1]);
      r[i-1] += r[i];
    }

    int q; cin >> q;
    while (q--) {
      int L,R; cin >> L >> R;
      L-- , R--;
      if (L < R) {
        cout << l[R] - l[L] << '\n';
      } else {
        cout << r[R] - r[L] << '\n';
      }
    }

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
