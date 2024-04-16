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

    long long top = 0, bottom = 0;
    map<long long,bool> m;
    m[0] = 1;
    bool ans = 0;
    for (int i=0;i<n;i++) {
      int x = a[i];
      if (i&1) {
        top += x;
      } else {
        bottom += x;
      }
      if (m[top-bottom]) {
        ans = 1;    
        break;
      }
      m[top-bottom] = 1;
    }
    (ans) ? cout << "YES\n" : cout << "NO\n";
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
