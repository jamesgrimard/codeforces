// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1913/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;


void solve() {

  int n; cin >> n;
  int a[32] = {};
  for (int i=0;i<n;i++) {
    int x,y; cin >> x >> y;
    if (x == 1) a[y]++;
    if (x == 2) {
      bool ans = 0;
      int temp = y;
      for (int k=31;k>=0;k--) {
        int p = pow(2,k);
        int mn = min(a[k],temp/p);
        temp -= mn * p;
        if (temp == 0) ans = 1;
      }      
      (ans) ? cout << "YES\n" : cout << "NO\n";
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
