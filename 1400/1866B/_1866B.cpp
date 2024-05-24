// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1866/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

using namespace std;

void solve() {
  
  int n; cin >> n;
  map<int,int> _map; 

  vector<int> a(n);
  for (int i=0;i<n;i++) {
    cin >> a[i];
    _map[a[i]]++;
  }
  for (int i=0;i<n;i++) {
    int x; cin >> x;
    _map[a[i]] += (x - 1);
  }

  int m; cin >> m;
  vector<int> b(m);
  for (int i=0;i<m;i++) {
    cin >> b[i];
    _map[b[i]]--;
  }
  for (int i=0;i<m;i++) {
    int x; cin >> x;
    _map[b[i]] -= (x - 1);
  }

  int cnt = 0;
  bool ans = 1;
  int const mod = 998244353;

  for (auto &i : _map) {
    if (i.second < 0) ans = 0;
    if (i.second > 0) cnt++;
  }

  int result = 1;
  while (cnt--) result = (result * 2) % mod;


  (ans) ? cout << result << '\n' : cout << ans << '\n';



}

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();

  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/