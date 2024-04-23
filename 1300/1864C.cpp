// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1864/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;
            
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    vector<int> v;
    int p = 1;
    while (n > 1) {
      v.push_back(n);
      for (int i=31;i>=0;i--) {
        if (n % (p << i) == 0 && n != (p << i)) {
          n -= (p << i);
          break;
        }
      }
    }
    cout << v.size() + 1 << '\n';
    for (auto &i : v) cout << i << " ";
    cout << 1 << '\n'; 
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