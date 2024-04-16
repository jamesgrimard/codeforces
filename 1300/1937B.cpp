// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1937/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string a,  b , s = ""; cin >> a >> b;
    bool top = 1;
    for (int i=0;i<n;i++) {
      if (top) s.push_back(a[i]);
      if (i == n-1 || a[i+1] > b[i]) top = 0;
      if (!top) s.push_back(b[i]);
    }
    bool f = 0;
    int R = n , L = 1;
    for (int i=n-2;i>=0;i--) if (b[i] < a[i+1]) R = i+1;
          
    for (int i=R-2;i>=0;i--) {
      if (b[i] > a[i+1]) {
        L = i + 2;
        break;
      }
    }

    cout << s << '\n';
    cout << R - L + 1 << '\n';
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
