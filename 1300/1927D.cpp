// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1927/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;


void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;

    int a[n+1] , r[n+1]={};
    for (int i=1;i<=n;i++) cin >> a[i];

    pair<int,int> p = {1,-1};
    for (int i=2;i<=n;i++) {
      if (a[i] == a[p.first]) {
        p.first = i;
        if (p.second != -1) r[i] = p.second;
      } else {
        r[i] = p.first;
        p.second = p.first;
        p.first = i;
      }
    }

    
    int q; cin >> q;
    for (int i=0;i<q;i++) {
      int L , R; cin >> L >> R;
      (r[R] < L) ? cout << -1 << " " << -1  << '\n' : cout << r[R] << " " << R << '\n';
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
