// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1372/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    bool f= 0;
    for (long long i=2;i*i<=n;i++) {
      if (n % i == 0) {
        cout << n/i << " " << (i-1LL) * n/i << '\n';
        f = 1;
        break;
      }
    }
    if (!f) cout << 1 << " " << n-1 << '\n';
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