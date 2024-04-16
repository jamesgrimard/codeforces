// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1926/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

const int k = 2147483647;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    map<int,int> m;
    int grps = n;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (m[x^k]) {
        grps--;
        m[x^k]--;
        continue;
      }
      m[x]++;
    }
    cout << grps << '\n';
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
