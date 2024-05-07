// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1152/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
                                  
  int x, ans; cin >> x;
  vector<int> v;
  for (int i=1;i<=41;i++) {
    int p = 1 , I = 0 , k = -1;
    while ((p << I) < x) {
      if (((p<<I) & x) == 0) k = I+1;
      I++;
    }
    if (k == -1) { 
      ans = i - 1;
      break;
    }
    (i % 2) ? x ^= ((int) pow(2,k)-1) : x++;
    if (i%2) v.push_back(k);
  }

  cout << ans << '\n';
  for (auto &i : v) cout << i << " ";
  




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