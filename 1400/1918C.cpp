// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1918/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int tt; cin >> tt;
  while (tt--) {

    long long a , b , r , x = 0; cin >> a >> b >> r;
    if (a < b) swap(a,b);

    bool f = 0;

    for (int i=63;i>=0;i--) {
      if ((a & (1LL << i)) != (b & (1LL << i))) {
        if (!f) {
          f = 1;
          continue;
        }
        if ((a & (1LL << i)) && !(b & (1LL << i)) && x + (1LL << i) <= r) {
          a ^= (1LL << i);
          b ^= (1LL << i);
          x += (1LL << i);
        }
      }
    }

    cout << a - b << '\n';
    
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