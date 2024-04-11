// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    if (k > n + 2) {
      cout << 0 << '\n';
      continue;
    }
    int a[k] = {} , cnt = 0;
    a[k-1] = n;
    for (int i=n;i>=n/2+(n&1);i--) {
      a[k-2] = i;
      for (int j=k-3;j>=0;j--) {
        a[j] = a[j+2] - a[j+1];
        if (j == 0) cnt++;
        if (a[j] < a[j+1]/2+(a[j+1]&1)) break;
      }
    }
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
