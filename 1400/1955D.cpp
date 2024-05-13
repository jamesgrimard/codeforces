// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1955/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
  
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int N , M , k; cin >> N >> M >> k;
    
    int a[N];
    for (int i=0;i<N;i++) cin >> a[i];

    int b[N];
    map<int,int> m;
    for (int i=0;i<M;i++) {
      cin >> b[i];
      m[b[i]]++;
    }

    map<int,int> _m;
    for (int i=0;i<M;i++) _m[a[i]]++;

    int cur = 0 , ans = 0;
    for (auto &i : m) cur += min(m[i.first],_m[i.first]);
    if (cur >= k) ans++;

    for (int i=M;i<N;i++) {
      if (_m[a[i-M]] <= m[a[i-M]]) cur--;
      _m[a[i-M]]--;
      if (_m[a[i]] < m[a[i]]) cur++;
      _m[a[i]]++;
      if (cur >= k) ans++;
    }

    cout << ans << '\n';

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