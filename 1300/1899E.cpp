// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1899/E
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

    int mn = 1e9 + 7 , I = n-1;
    bool f = 0;
    for (int i=n-1;i>=0;i--) {
      if (a[i] <= mn) {
        I = i;
        mn = a[i];
      }
    }
    int mx = 0;
    for (int i=0;i<n-1;i++) if (a[i] > a[i+1]) mx = i; 

    (mx > I) ? cout << -1 << '\n' : cout << I << '\n';
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
