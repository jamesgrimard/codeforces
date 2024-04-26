// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1371/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    long long a , b , n , m; cin >> a >> b >> n >> m;
    long long k = min(abs(a-b),n);
    n -= k;
    if (b >= a) {
      b -= k;
    } else {
      a -= k;
    }
    (a + b >= n + m && min(a,b) >= m) ? cout << "Yes\n" : cout << "No\n";
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