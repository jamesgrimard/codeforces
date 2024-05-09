// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1065/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  long long n , m; cin >> n >> m;


  // min
  cout << max(0LL,n - m * 2LL) << " ";

  if (m == 0) {
    cout << n;
    return;
  }
  // max
  double used = (1.0 + sqrt(8.0 * (double) m + 1.0) ) / 2.0;  
  if (used != (int) used) used += 1.0;
  cout << n - (int) used;



                                                                                          
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