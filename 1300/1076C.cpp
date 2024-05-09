// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1076/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  
  int tt; cin >> tt;
  while (tt--) {
    
    
    double x; cin >> x;

    double b2 = x * x;

    double ans = (x + sqrt(b2 - 4.0 * x)) / 2.0;

    if (x == 0) {
      cout << 'Y' << " " << 0 << " " << 0 << '\n';
    } else if (x < 4) {
      cout << "N\n";
    } else {     
      cout << "Y " << setprecision(10) << ans << " " << x / ans << '\n';
    }
  
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