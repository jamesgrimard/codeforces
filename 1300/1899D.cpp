// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1899/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;
            
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    map<int,int> m;
    m[1] = 0 , m[2] = 0;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      m[x]++;
    }
    long long cnt = (long long ) m[1] * (long long) m[2];
    for (auto &i : m) if (i.second >= 2) cnt += ((long long) i.second) * ((long long) i.second-1) / 2LL;
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