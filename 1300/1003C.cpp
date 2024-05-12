// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1003/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
  
void solve() {
  
  double n , k; cin >> n >> k;
  double a[(int) n+1] = {};
  for (int i=1;i<=n;i++) cin >> a[i];

  double cnt[(int)n+1] = {};
  for (int i=1;i<=n;i++) cnt[i] = cnt[i-1] + a[i];

  double mx = 0;
  for (int i=k;i<=n;i++) {
    double total = (cnt[i] - cnt[i - (int) k + 1]);
    for (int j=i-(int)k+1;j>=0;j--) {
      total += a[j];
      mx = max(total / (double) (i-j+1) , mx);
    }
  }

  cout << setprecision(12) << mx << '\n';
  
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