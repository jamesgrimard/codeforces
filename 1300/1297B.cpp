// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1297/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    long long n, k; cin >> n >> k;
    long long a[n] = {} , cnt[n] = {} , mx = 0;
    int skip = 0;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (a[i] > a[mx]) mx = i;
      cnt[i] = a[i];
      if (i) cnt[i] += cnt[i-1];
      if (cnt[i] > k) {
        if (cnt[i] - a[mx] <= k) skip = mx + 1;
      }
    }
    cout << skip << '\n';
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