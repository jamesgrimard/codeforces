// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1217/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
    
void solve() {    
                      
int tt; cin >> tt;
while (tt--) {
  int s,i,xp; cin >> s >> i >> xp;
  int k = max(0,i-s+1);
  int L = 0 , R = xp , M;
  while (L <= R) {
    M = (L + R) / 2;
    if (xp - M + i < s + M) R = M - 1;
    if (xp - M + i >= s + M) L = M + 1;
  }
  cout << max(0,xp - L + 1) << '\n';


 
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